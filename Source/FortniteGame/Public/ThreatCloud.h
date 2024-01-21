#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Styling/SlateBrush.h"
#include "EFortThreatDeactivationType.h"
#include "ThreatCloud.generated.h"

class ABuildingRift;
class UBoxComponent;

UCLASS(Blueprintable)
class AThreatCloud : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> LightningSourceAreas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiniMapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniMapIconPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiniMapFarOffIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InActiveTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathTimerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CloudMiniMapTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniMapFarOffIconDegreesOfArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox ThreatBoxVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GroundLevelUnderCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> GoalActorLocations;
    
public:
    AThreatCloud();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThreatVolumeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnLightningStrike(const FVector& StartLocation, const FVector& EndLocation, ABuildingRift* Rift, bool bLightningStruckRift);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloudStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloudHiddenChange(bool bCloudsAreHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloudDeactivated(EFortThreatDeactivationType DeactivationType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloudActivated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginDeath();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ManualLightningFlash();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetThreatVolume() const;
    
};

