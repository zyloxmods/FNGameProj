#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "ActiveVehicleUI.h"
#include "FortAthenaSKVehicle.h"
#include "FortRechargingActionTimer.h"
#include "Templates/SubclassOf.h"
#include "VehicleSpecificUIDetails.h"
#include "FortMeatballVehicle.generated.h"

class ABuildingActor;
class AFortAthenaVehicle;
class APlayerController;
class UFortAthenaVehicleFuelComponent;
class UFortCameraMode;
class UFortMeatballVehicleConfigs;
class UFortVehicleAudioVoice;
class UMaterialInstanceDynamic;
class UCameraShake;
class UNiagaraComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AFortMeatballVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRechargingActionTimer BoostAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaterSkiSeatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FxNormalizationMaxSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioEngineUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioEngineDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioWakeTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioWakeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioScrape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BoostMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheBoostReadyLFx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheBoostReadyRFx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheDirtCascade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CacheSnowInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* DrivingPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShake* LandCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> LandCameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShake* DriverCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> DriverCameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LandRumbleIntensity;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 LandForceFeedbackHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TurnRumbleIntensity;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 TurnForceFeedbackHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentSnowAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSnow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoostReadyFxOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLargeRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTurnRumbleActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaterDropsOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GCVehicleScreenDrips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters GCParamsEmpty;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMeatballVehicleConfigs> FortMeatballVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaVehicle> FortSpaghettiVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> BoostingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterSkiEnabled;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_IsUsingNewFuelSystemState, meta=(AllowPrivateAccess=true))
    int8 IsUsingNewFuelSystemState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMeatballVehicleConfigs* FortMeatballVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaterLineStartPontoonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaterLineEndPontoonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoostFailed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaVehicleFuelComponent* FuelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveVehicleUI> ActiveFuelUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpecificUIDetails> CustomFuelUI;
    
public:
    AFortMeatballVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSnowAndDirtParams(float NormalizedForwardSpeed);
    
    UFUNCTION(BlueprintCallable)
    void StopTurnRumble();
    
    UFUNCTION(BlueprintCallable)
    void StopLandRumble();
    
    UFUNCTION(BlueprintCallable)
    void StopDriverCameraShake();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SmashedThroughBuildingPiece(const FVector& ImpactPoint, const FVector& ImpactNormal, const ABuildingActor* BuildingHitActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUsingNewFuelSystemState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostFailed();
    
    UFUNCTION(BlueprintCallable)
    void LandShakeEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetSeatRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSeatOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostCharge() const;
    
    UFUNCTION(BlueprintCallable)
    void CachePSCPointers(UParticleSystemComponent* InCacheBoostReadyLFx, UParticleSystemComponent* InCacheBoostReadyRFx, UParticleSystemComponent* InCacheDirtCascade, UNiagaraComponent* InCacheSnowLandscapeComponent);
    
    UFUNCTION(BlueprintCallable)
    void CacheAudioPointers(UFortVehicleAudioVoice* InAudioEngineUp, UFortVehicleAudioVoice* InAudioEngineDown, UFortVehicleAudioVoice* InAudioWakeTurn, UFortVehicleAudioVoice* InAudioWakeSpeed, UFortVehicleAudioVoice* InAudioScrape);
    
};

