#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AI/Navigation/NavPathObserverInterface.h"
#include "AttributeSet.h"
#include "AlertLevelInfo.h"
#include "BotDelayedStimulus.h"
#include "BuildingWeakSpotData.h"
#include "CosmeticLoadoutOwner.h"
#include "DebugMinimapData.h"
#include "EAlertLevel.h"
#include "EAthenaGamePhase.h"
#include "EAthenaGamePhaseStep.h"
#include "EFortSafeZoneState.h"
#include "EReachLocationValidationMode.h"
#include "EStimType.h"
#include "FortAbilitySetHandle.h"
#include "FortAnalyticsControllerInterface.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaMutator_EQSProviderInterface.h"
#include "FortBotInventoryInfo.h"
#include "FortBotTargetHandler.h"
#include "FortBotThreatActorInfo.h"
#include "FortInventoryOwnerInterface.h"
#include "FortTeamActorInterface.h"
#include "FortWorldMarkerData.h"
#include "OnAgentDBNOStatusChangedEventDelegate.h"
#include "OnAgentDiedEventDelegate.h"
#include "OnAgentGameOverDelegate.h"
#include "OnAlertLevelChangedEventDelegate.h"
#include "OnStealthMeterChangedEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAIBotController.generated.h"

class AActor;
class AAthenaAIController;
class ABuildingActor;
class ACharacter;
class AController;
class AFortAthenaMutator_Bots;
class AFortGameModeAthena;
class AFortInventory;
class AFortPawn;
class AFortPlayerPawnAthena;
class AFortWeapon;
class APawn;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UAISenseConfig_Sight;
class UAthenaAIServiceAffiliation;
class UAthenaMarkerComponent;
class UBehaviorTree;
class UFortAthenaAIBotAimingDigestedSkillSet;
class UFortAthenaAIBotAttackingDigestedSkillSet;
class UFortAthenaAIBotCustomizationData;
class UFortAthenaAIBotHarvestDigestedSkillSet;
class UFortAthenaAIBotInventoryDigestedSkillSet;
class UFortAthenaAIBotInventoryItems;
class UFortAthenaAIBotLootingDigestedSkillSet;
class UFortAthenaAIBotMovementDigestedSkillSet;
class UFortAthenaAIBotPerceptionDigestedSkillSet;
class UFortAthenaAIBotPlayStyleDigestedSkillSet;
class UFortAthenaAIBotSkillSet;
class UFortAthenaAIRuntimeParametersComponent;
class UFortAthenaAISpawnerData;
class UFortAthenaMutator_SpawningPolicyData;
class UFortAthenaNpcPatrollingComponent;
class UFortBotNameSettings;
class UFortControllerComponent_Telemetry;
class UFortInteractContextInfo;
class UFortServerBotManagerAthena;
class UFortWorldItem;
class UPrimitiveComponent;
class UStatManager;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortAthenaAIBotController : public AAIController, public IFortTeamActorInterface, public INavPathObserverInterface, public IFortInventoryOwnerInterface, public IFortAthenaMutator_EQSProviderInterface, public IFortAnalyticsControllerInterface, public ICosmeticLoadoutOwner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FFortAbilitySetHandle> AppliedInGameModifierAbilitySetHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> GadgetTrackedAttributeItemInstanceIds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAnAthenaGameParticipant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeutralBecomeHostileOnBump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReachLocationValidationMode ReachLocationValidationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortBotInventoryInfo SlotItems[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotInventoryDigestedSkillSet* CacheInventoryDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* PlayerBotPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortServerBotManagerAthena* CachedBotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Bots* CachedBotMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaNpcPatrollingComponent* CachedPatrollingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBotDelayedStimulus> DelayedStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortBotTargetHandler TargetHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortBotThreatActorInfo> ProjectilesThreatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortBotThreatActorInfo> TrapsThreatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAlertLevel CurrentAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlertLevelInfo DefaultAlertLevelInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAlertLevelChangedEvent OnAlertLevelChangedEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStealthMeterChangedEvent OnStealthMeterChangedEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAgentDBNOStatusChangedEvent OnAgentDBNOStatusChangedEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAgentDiedEvent OnAgentDiedEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAgentGameOver OnAgentGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowUnsupportedItemsInDefaultInventory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaAIBotSkillSet>> BotSkillSetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotInventoryItems* StartupInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CosmeticLoadoutBC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBotNameSettings* NameSettingsBC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpectateOnDeathMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpectateOnDeathMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SightWeatherCapRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LoseSightWeatherCapRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EmotesMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotHarvestDigestedSkillSet* CacheHarvestDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotLootingDigestedSkillSet* CacheLootingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotPlayStyleDigestedSkillSet* CachePlayStyleSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInteractContextInfo* InteractContextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeDestroyedOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeRespawnedOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItem* CachedWorldItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* CacheWeaponUsedToCalculateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedIsUsingArcedProjectileWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedProjectileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedProjectileGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* CachedWeaponUsedToCalculateProjectileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatManager* StatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBuildingWeakSpotData> ActiveWeakSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPawn> CacheBotPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentLootActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaMarkerComponent* MarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BotPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BotIDSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BotPlayerNameWithSkillRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaMutator_SpawningPolicyData* PolicyDataSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_Telemetry* FortControllerComponent_Telemetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceUsingBuildingTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItem* PendingEquipWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* PlayerToSpectateOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAISenseConfig_Sight* AISenseConfig_SightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* BotOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BotControllerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* ReviveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotCustomizationData* BotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDebugMinimapData DebugMinimapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* RevivePlayerPawnToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LeashActorToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeashActorToFollowLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> RespawnSpawnerDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIServiceAffiliation* CachedAffiliationService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAffectedByMutatorHealthAndShieldModifiers;
    
public:
    AFortAthenaAIBotController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateLeashActorToFollowLocation();
    
    UFUNCTION(BlueprintCallable)
    void ThankBusDriver();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchTeam(uint8 TeamIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopEmote();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRadialLeashOuterRadius(const float OuterRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRadialLeashInnerRadius(const float InnerRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPatrollingEnable(const bool bEnable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLeashActorToFollow(const AActor* ActorToFollow, const float LeashLocationUpdateRate, const FVector LocalOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBotOwner(AActor* InBotOwner);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReleaseBuildTool();
    
public:
    UFUNCTION(BlueprintCallable)
    void QueueStim(AActor* SourceActor, const FVector& SourceLocation, const FVector& SourceDirection, const EStimType NewStimType, const float StimStrength, const FName StimTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayEmote(const FPrimaryAssetId& EmotePrimaryAssetId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OverrideSkill(const float NewSkill);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAggressivenessPlayStyle(bool bInIsAggressive);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPawnDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPawnDead(AFortPawn* FortPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetBuildingDestroyed(ABuildingActor* Building, AAthenaAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OnServerMarkerAdded(FFortWorldMarkerData MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnSafeZoneUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnSafezoneStateChanged(const EFortSafeZoneState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnPossessedPawnReceiveDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnPossesedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionSensed(AActor* SourceActor, FAIStimulus Stim);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* OldWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChange(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnLaunched(const FVector LaunchVelocity, const bool bXYOverride, const bool bZOverride);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentHarvestableDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlertLevelChanged(const EAlertLevel OldAlertLevel, const EAlertLevel NewAlertLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnAgentDBNO(AFortPawn* InPlayer, bool bInIsDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnAthenaGameParticipant() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCollisionComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaMarkerComponent* GetMarkerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBotOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnBehaviorTreeStarted();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

