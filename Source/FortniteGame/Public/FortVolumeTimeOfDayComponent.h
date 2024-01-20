#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortVolumeTimeOfDayConfig.h"
#include "PropertyOverrideData.h"
#include "FortVolumeTimeOfDayComponent.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;
class AFortTimeOfDayManager;
class AFortVolume;
class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortVolumeTimeOfDayComponent : public UActorComponent {
    GENERATED_BODY()
public:
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
    void ReplayFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOfDayManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOfDayConfig();
    
    UFUNCTION(BlueprintCallable)
    void MutatorSettingsChanged(const FPropertyOverrideData& OverrideData);
    
    UFUNCTION(BlueprintCallable)
    void ClientExitedVolume(APlayerState* PlayerState, AFortVolume* FortVolume);
    
    UFUNCTION(BlueprintCallable)
    void ClientEnteredVolume(APlayerState* PlayerState, AFortVolume* FortVolume);
    
};

