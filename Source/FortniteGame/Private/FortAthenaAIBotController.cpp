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
    this->bIsAnAthenaGameParticipant = true;
    this->bNeutralBecomeHostileOnBump = false;
    this->ReachLocationValidationMode = EReachLocationValidationMode::None;
    this->BehaviorTree = NULL;
    this->CacheInventoryDigestedSkillSet = NULL;
    this->PlayerBotPawn = NULL;
    this->CachedBotManager = NULL;
    this->CachedGameMode = NULL;
    this->CachedBotMutator = NULL;
    this->CachedAIRuntimeParametersComponent = NULL;
    this->CachedPatrollingComponent = NULL;
    this->CurrentAlertLevel = EAlertLevel::Unaware;
    this->Inventory = NULL;
    this->Skill = 1;
    this->bAllowUnsupportedItemsInDefaultInventory = false;
    this->StartupInventory = NULL;
    this->NameSettingsBC = NULL;
    this->CachePerceptionDigestedSkillSet = NULL;
    this->CacheHarvestDigestedSkillSet = NULL;
    this->CacheMovementSkillSet = NULL;
    this->CacheLootingSkillSet = NULL;
    this->CacheAttackingSkillSet = NULL;
    this->CachePlayStyleSkillSet = NULL;
    this->InteractContextInfo = NULL;
    this->CacheAimingDigestedSkillSet = NULL;
    this->bCanBeDestroyedOnDeath = false;
    this->bCanBeRespawnedOnDeath = true;
    this->CachedWorldItem = NULL;
    this->CacheWeaponUsedToCalculateType = NULL;
    this->bCachedIsUsingArcedProjectileWeapon = false;
    this->CachedProjectileSpeed = 1;
    this->CachedProjectileGravityScale = 1;
    this->CachedWeaponUsedToCalculateProjectileData = NULL;
    this->StatManager = NULL;
    this->CacheBotPawnClass = NULL;
    this->CurrentLootActor = NULL;
    this->MarkerComponent = CreateDefaultSubobject<UAthenaMarkerComponent>(TEXT("MarkerComponent"));
    this->BotIDSuffix = TEXT("DEFAULT");
    this->PolicyDataSpawner = NULL;
    this->FortControllerComponent_Telemetry = CreateDefaultSubobject<UFortControllerComponent_Telemetry>(TEXT("TelemetryComp"));
    this->bForceUsingBuildingTool = false;
    this->PendingEquipWeapon = NULL;
    this->PlayerToSpectateOnDeath = NULL;
    this->AISenseConfig_SightOverride = NULL;
    this->BotOwner = NULL;
    this->BotControllerUID = 0;
    this->ReviveTarget = NULL;
    this->BotData = NULL;
    this->RevivePlayerPawnToken = NULL;
    this->LeashActorToFollow = NULL;
    this->RespawnSpawnerDataClass = NULL;
    this->CachedAffiliationService = NULL;
    this->bIsAffectedByMutatorHealthAndShieldModifiers = true;
}

