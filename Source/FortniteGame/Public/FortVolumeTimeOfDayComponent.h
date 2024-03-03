#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortVolumeTimeOfDayConfig.h"
#include "PropertyOverrideData.h"
#include "FortVolumeTimeOfDayComponent.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;
class AFortTimeOfDayManager;
class AFortVolume;
class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortVolumeTimeOfDayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEditorOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightIntensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LightColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogDensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFogColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PostProcessOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortTimeOfDayManager> OverrideTODClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimeOfDayManager, meta=(AllowPrivateAccess=true))
    AFortTimeOfDayManager* TimeOfDayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimeOfDayConfig, meta=(AllowPrivateAccess=true))
    FFortVolumeTimeOfDayConfig TimeOfDayConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOverridingTimeOfDay;
    
public:
    UFortVolumeTimeOfDayComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void SpectatorFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOfDayManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOfDayConfig();
    
    UFUNCTION(BlueprintCallable)
    void MutatorSettingsChanged(const FPropertyOverrideData& OverrideData);
    
    UFUNCTION(BlueprintCallable)
    void CreateLocalTimeOfDayManager();
    
    UFUNCTION(BlueprintCallable)
    void ClientExitedVolume(APlayerState* PlayerState, AFortVolume* FortVolume);
    
    UFUNCTION(BlueprintCallable)
    void ClientEnteredVolume(APlayerState* PlayerState, AFortVolume* FortVolume);
    
    UFUNCTION(BlueprintCallable)
    void BindToVolumeMangerClientEnterExit();
    
};

