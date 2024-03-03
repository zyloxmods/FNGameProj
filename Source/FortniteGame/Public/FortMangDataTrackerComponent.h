#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "EAlertLevel.h"
#include "FortGameplayDataTrackerComponent.h"
#include "FortMangBotInfoArray.h"
#include "FortMangSentryInfo.h"
#include "FortMangDataTrackerComponent.generated.h"

class ABuildingGameplayActor;
class AFortAthenaAIBotController;
class AFortPawn;
class AFortPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMangDataTrackerComponent : public UFortGameplayDataTrackerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumMangBotsThreatenedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MangBotsTargetedThreatenedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumMangBotsAlertedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumMangBotsDBNOEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumMangBotsUnawareEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumMangBossesThreatenedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BossIdentifyingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumTurretsThreatenedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumTurretsAlertedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumTurretsUnawareEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumCamerasThreatenedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumCamerasAlertedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumCamerasUnawareEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UnawareNearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UnawareFarDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AlertNearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AlertFarDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThreatenedFarDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DistancePercentLerpExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldUseDotProductForThreatEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThreatEventsDotProductComparisonValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThreatEventsDotProductFailureMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TargetedThreatenedGuaranteedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TargetedThreatenedNearComparisonRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotFacingNearTargetedThreatenedDotProductComparisonValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotFacingFarTargetedThreatenedDotProductComparisonValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PlayerFacingNearTargetedThreatenedDotProductComparisonValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PlayerFacingFarTargetedThreatenedDotProductComparisonValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldUseTargetedThreatenedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldTrackPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaAIBotController*> MangBotControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BotInfos, meta=(AllowPrivateAccess=true))
    FFortMangBotInfoArray BotInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortMangSentryInfo> CameraInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortMangSentryInfo> TurretInfos;
    
public:
    UFortMangDataTrackerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTurretAlertState(ABuildingGameplayActor* TurretToUpdate, EAlertLevel NewAlertLevel);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCameraAlertState(ABuildingGameplayActor* CameraToUpdate, EAlertLevel NewAlertLevel);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterLocalPlayerController();
    
    UFUNCTION(BlueprintCallable)
    void RegisterTurretInfos(const TArray<FFortMangSentryInfo>& Turrets);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMangControllers(TArray<AFortAthenaAIBotController*> MangControllers);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLocalPlayerController(AFortPlayerController* LocalPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCameraInfos(const TArray<FFortMangSentryInfo>& Cameras);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BotInfos();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBotPawnDBNOStatusChanged(AFortPawn* FortPawn, bool bIsDBNO);
    
    UFUNCTION(BlueprintCallable)
    void OnBotDied(AFortAthenaAIBotController* BotController, AFortPawn* FortPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnBotDBNOStatusChanged(AFortAthenaAIBotController* BotController, bool bIsDBNO);
    
    UFUNCTION(BlueprintCallable)
    void OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackingPerPlayer() const;
    
};

