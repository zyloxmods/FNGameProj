#include "FortAthenaAIBotController.h"
#include "AthenaMarkerComponent.h"
#include "FortControllerComponent_Telemetry.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaAIBotController::UpdateLeashActorToFollowLocation() {
}

void AFortAthenaAIBotController::ThankBusDriver() {
}

void AFortAthenaAIBotController::SwitchTeam(uint8 TeamIndex) {
}

void AFortAthenaAIBotController::StopEmote() {
}

void AFortAthenaAIBotController::SetRadialLeashOuterRadius(const float OuterRadius) {
}

void AFortAthenaAIBotController::SetRadialLeashInnerRadius(const float InnerRadius) {
}

void AFortAthenaAIBotController::SetPatrollingEnable(const bool bEnable) {
}

void AFortAthenaAIBotController::SetLeashActorToFollow(const AActor* ActorToFollow, const float LeashLocationUpdateRate, const FVector LocalOffset) {
}

void AFortAthenaAIBotController::SetBotOwner(AActor* InBotOwner) {
}

void AFortAthenaAIBotController::ReleaseBuildTool() {
}

void AFortAthenaAIBotController::QueueStim(AActor* SourceActor, const FVector& SourceLocation, const FVector& SourceDirection, const EStimType NewStimType, const float StimStrength, const FName StimTag) {
}

void AFortAthenaAIBotController::PlayEmote(const FPrimaryAssetId& EmotePrimaryAssetId) {
}

void AFortAthenaAIBotController::OverrideSkill(const float NewSkill) {
}

void AFortAthenaAIBotController::OverrideAggressivenessPlayStyle(bool bInIsAggressive) {
}

void AFortAthenaAIBotController::OnTargetPawnDestroyed() {
}

void AFortAthenaAIBotController::OnTargetPawnDead(AFortPawn* FortPawn) {
}

void AFortAthenaAIBotController::OnTargetBuildingDestroyed(ABuildingActor* Building, AAthenaAIController* AIController) {
}

void AFortAthenaAIBotController::OnServerMarkerAdded(FFortWorldMarkerData MarkerData) {
}

void AFortAthenaAIBotController::OnSafeZoneUpdated() {
}

void AFortAthenaAIBotController::OnSafezoneStateChanged(const EFortSafeZoneState NewState) {
}

void AFortAthenaAIBotController::OnPossessedPawnReceiveDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaAIBotController::OnPossesedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaAIBotController::OnPerceptionSensed(AActor* SourceActor, FAIStimulus Stim) {
}

void AFortAthenaAIBotController::OnPawnWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* OldWeapon) {
}

void AFortAthenaAIBotController::OnPawnDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaAIBotController::OnMovementModeChange(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void AFortAthenaAIBotController::OnLaunched(const FVector LaunchVelocity, const bool bXYOverride, const bool bZOverride) {
}

void AFortAthenaAIBotController::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaAIBotController::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortAthenaAIBotController::OnCurrentHarvestableDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


void AFortAthenaAIBotController::OnAgentDBNO(AFortPawn* InPlayer, bool bInIsDBNO) {
}

bool AFortAthenaAIBotController::IsAnAthenaGameParticipant() const {
    return false;
}

void AFortAthenaAIBotController::HandleCollisionComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UAthenaMarkerComponent* AFortAthenaAIBotController::GetMarkerComponent() const {
    return NULL;
}

AActor* AFortAthenaAIBotController::GetBotOwner() const {
    return NULL;
}


void AFortAthenaAIBotController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaAIBotController, Inventory);
}

AFortAthenaAIBotController::AFortAthenaAIBotController() {
    bIsAnAthenaGameParticipant = true;
    bNeutralBecomeHostileOnBump = false;
    ReachLocationValidationMode = EReachLocationValidationMode::None;
    BehaviorTree = NULL;
    CacheInventoryDigestedSkillSet = NULL;
    PlayerBotPawn = NULL;
    CachedBotManager = NULL;
    CachedGameMode = NULL;
    CachedBotMutator = NULL;
    CachedAIRuntimeParametersComponent = NULL;
    CachedPatrollingComponent = NULL;
    CurrentAlertLevel = EAlertLevel::Unaware;
    Inventory = NULL;
    Skill = 1;
    bAllowUnsupportedItemsInDefaultInventory = false;
    StartupInventory = NULL;
    NameSettingsBC = NULL;
    CachePerceptionDigestedSkillSet = NULL;
    CacheHarvestDigestedSkillSet = NULL;
    CacheMovementSkillSet = NULL;
    CacheLootingSkillSet = NULL;
    CacheAttackingSkillSet = NULL;
    CachePlayStyleSkillSet = NULL;
    InteractContextInfo = NULL;
    CacheAimingDigestedSkillSet = NULL;
    bCanBeDestroyedOnDeath = false;
    bCanBeRespawnedOnDeath = true;
    CachedWorldItem = NULL;
    CacheWeaponUsedToCalculateType = NULL;
    bCachedIsUsingArcedProjectileWeapon = false;
    CachedProjectileSpeed = 1;
    CachedProjectileGravityScale = 1;
    CachedWeaponUsedToCalculateProjectileData = NULL;
    StatManager = NULL;
    CacheBotPawnClass = NULL;
    CurrentLootActor = NULL;
    MarkerComponent = CreateDefaultSubobject<UAthenaMarkerComponent>(TEXT("MarkerComponent"));
    BotIDSuffix = TEXT("DEFAULT");
    PolicyDataSpawner = NULL;
    FortControllerComponent_Telemetry = CreateDefaultSubobject<UFortControllerComponent_Telemetry>(TEXT("TelemetryComp"));
    bForceUsingBuildingTool = false;
    PendingEquipWeapon = NULL;
    PlayerToSpectateOnDeath = NULL;
    AISenseConfig_SightOverride = NULL;
    BotOwner = NULL;
    BotControllerUID = 0;
    ReviveTarget = NULL;
    BotData = NULL;
    RevivePlayerPawnToken = NULL;
    LeashActorToFollow = NULL;
    RespawnSpawnerDataClass = NULL;
    CachedAffiliationService = NULL;
    bIsAffectedByMutatorHealthAndShieldModifiers = true;
}

