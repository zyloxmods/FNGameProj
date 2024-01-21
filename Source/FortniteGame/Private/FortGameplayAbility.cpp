#include "FortGameplayAbility.h"
#include "Templates/SubclassOf.h"

void UFortGameplayAbility::TrackGroupedActor(AActor* ActorToTrack, FGameplayTag GroupTag) {
}

void UFortGameplayAbility::TrackActor(AActor* ActorToTrack) {
}

bool UFortGameplayAbility::SetupPreviewImageOverride_Implementation() {
    return false;
}

void UFortGameplayAbility::SetCameraMode(TSubclassOf<UFortCameraMode> CameraModeClass) {
}

void UFortGameplayAbility::SetAIFocalPoint(AActor* FocusTarget, FVector FocalPoint, bool bUseAttackingPriority) {
}

void UFortGameplayAbility::QueryGameplayEffectContainerTargetExecutionModifiers(FGameplayAbilityTargetDataHandle TargetData, const UFortAbilitySystemComponent* SrcAbilitySystem, FGameplayTag ApplicationTag, int32 GameplayEffectLevel, const UObject* SourceObject, const TArray<FGameplayEffectExecutionScopedModifierInfo>& InScopedMods, TArray<FActiveGameplayEffectHandle> InIgnoreHandles, TArray<FGameplayModifierEvaluatedData>& OutOutputModifiers, bool bTooltipRequest) const {
}

void UFortGameplayAbility::OnGenericNotifyFromAnimation_Implementation(FGameplayTag NotifyTag) {
}


void UFortGameplayAbility::MakeGameplayEffectContainerSpecs(FGameplayTag ApplicationTag, int32 GameplayEffectLevel, TArray<FFortGameplayEffectContainerSpec>& OutSpecContainers) {
}

FFortGameplayEffectContainerSpec UFortGameplayAbility::MakeGameplayEffectContainerSpec(FGameplayTag ApplicationTag, int32 GameplayEffectLevel) {
    return FFortGameplayEffectContainerSpec{};
}



void UFortGameplayAbility::K2_AbilityCompleted() {
}

bool UFortGameplayAbility::IsTargetOutsideOfMaxYawRotation() const {
    return false;
}

TArray<AActor*> UFortGameplayAbility::GetTrackedGroupedActors(FGameplayTag GroupTag) const {
    return TArray<AActor*>();
}

TArray<AActor*> UFortGameplayAbility::GetTrackedActors() const {
    return TArray<AActor*>();
}

TSubclassOf<UFortTooltip> UFortGameplayAbility::GetTooltip(bool bSummaryTooltip) const {
    return NULL;
}

void UFortGameplayAbility::GetProjectileInitialValues(float& outProjectileSpeed, FRotator& outSpawnDirection, float& outProjectileGravity, AActor*& HomingTarget, bool bApplyInaccuracy, bool bApplyClampedMaxYawAngleToFire, bool bApplyLeading) const {
}

int32 UFortGameplayAbility::GetOwningPlayerTeamPerkProgressiveActivationLevel() const {
    return 0;
}

int32 UFortGameplayAbility::GetMaxNumTrackedActors() const {
    return 0;
}

FRotator UFortGameplayAbility::GetFireRotation(bool bApplyLeading, bool bApplyInaccuracy, bool bApplyClampedMaxYawAngleToFire) const {
    return FRotator{};
}

FVector UFortGameplayAbility::GetFireLocation() const {
    return FVector{};
}

UFortTooltipDisplayStatsList* UFortGameplayAbility::GetDisplayStats() const {
    return NULL;
}


AFortWeapon* UFortGameplayAbility::GetCurrentSourceWeapon() const {
    return NULL;
}

UFortWorldItemDefinition* UFortGameplayAbility::GetCurrentSourceItemDefinition() const {
    return NULL;
}

void UFortGameplayAbility::GetCurrentAbilitySourceLevel(float& OutSourceLevel) const {
}

FVector UFortGameplayAbility::GetAimLocationNearestPawn(AFortPawn* Instigator) {
    return FVector{};
}

AActor* UFortGameplayAbility::GetAIAbilityTarget() const {
    return NULL;
}

AFortPawn* UFortGameplayAbility::GetActivatingPawn() const {
    return NULL;
}

UFortAbilitySystemComponent* UFortGameplayAbility::GetActivatingAbilityComponent() const {
    return NULL;
}

float UFortGameplayAbility::GetAbilityTargetingLevel_Implementation() const {
    return 0.0f;
}

void UFortGameplayAbility::ForceCameraLookDown(APlayerController* PC) {
}

void UFortGameplayAbility::EquipVehicleWeapon(UFortWeaponItemDefinition* WeaponDefinition, const int32 SeatIndex, const int32 ItemLevel) {
}

void UFortGameplayAbility::EquipAbilityWeapon(UFortWeaponItemDefinition* WeaponDefinition, int32 ItemLevel) {
}

bool UFortGameplayAbility::DoesTargetHaveTags(const AActor* Target, const FGameplayTagContainer& Tags) const {
    return false;
}

bool UFortGameplayAbility::DoesTargetHaveProhibitedTagsForAI(const AActor* Target) const {
    return false;
}

void UFortGameplayAbility::ClearTrackedGroupedActors(FGameplayTag GroupTag, bool bDestroyActors) {
}

void UFortGameplayAbility::ClearTrackedActors(bool bDestroyActors) {
}

void UFortGameplayAbility::ClearCameraMode() {
}

void UFortGameplayAbility::ClearAIFocalPoint(bool bUseAttackingPriority) {
}

void UFortGameplayAbility::CalculateProjectileTrajectorySplineWithHit(FHitResult& OutHitResult, TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, TEnumAsByte<ECollisionChannel> TraceChannel, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance) {
}

void UFortGameplayAbility::CalculateProjectileTrajectorySpline(TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, TEnumAsByte<ECollisionChannel> TraceChannel, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance) {
}

void UFortGameplayAbility::BP_GetGameplayEffectContainers(FGameplayTag ApplicationTag, TArray<FFortGameplayEffectContainer>& OutContainers) {
}

FFortGameplayEffectContainer UFortGameplayAbility::BP_GetGameplayEffectContainer(FGameplayTag ApplicationTag) {
    return FFortGameplayEffectContainer{};
}

TArray<FActiveGameplayEffectHandle> UFortGameplayAbility::ApplyGameplayEffectContainerWithCSVStats(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag, int32 GameplayEffectLevel, const FString& StatName) {
    return TArray<FActiveGameplayEffectHandle>();
}

TArray<FActiveGameplayEffectHandle> UFortGameplayAbility::ApplyGameplayEffectContainer(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag, int32 GameplayEffectLevel) {
    return TArray<FActiveGameplayEffectHandle>();
}

FVector UFortGameplayAbility::ApplyAccuracyToTargetLocation(const FVector& SourceLocation, const FVector& TargetLocation, float inDesiredThrowAngle) const {
    return FVector{};
}

void UFortGameplayAbility::AddDynamicGameplayEffectContainer(FGameplayTag& ApplicationTag, FFortGameplayEffectContainer& Container) {
}

UFortGameplayAbility::UFortGameplayAbility() {
    this->ActivationType = EFortGameplayAbilityActivation::Active;
    this->ProjectileClass = NULL;
    this->bShowWidgetForCosts = true;
    this->bApplyingCostsEnabled = true;
    this->bStartWithCooldown = false;
    this->bPersistOnDeath = true;
    this->bIgnoreClientActivationAttempts = false;
    this->bStopsAIBehaviorLogic = false;
    this->bStopsAIMovement = false;
    this->bStopsRVOAvoidance = false;
    this->bForceNormalAILOD = false;
    this->MinimumRequiredAILODLevel = EFortAILODLevel::Invalid;
    this->bRelevantForAIDespawning = true;
    this->bUseAIFireLocationAndRotation = false;
    this->AIWeaponUsage = EFortAIWeaponUsage::NoWeaponUsage;
    this->bVerifyFireOffsetIsNotObstructedByWorldGeometry = false;
    this->bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = true;
    this->ActivationNoiseRange = 1000.00f;
    this->ImpactNoiseRange = 1000.00f;
    this->ActivationNoiseLoudness = -1.00f;
    this->ImpactNoiseLoudness = -1.00f;
    this->bLeadPawnTargets = false;
    this->DesiredThrowAngle = 0.00f;
    this->MaxYawAngleToFire = 0.00f;
    this->bClampMaxYawAngleToFire = false;
    this->bUseTargetActorLocation = false;
    this->InitialAccuracyMax = 0.00f;
    this->InitialAccuracyMin = 0.00f;
    this->TargetAccuracyMax = 0.00f;
    this->TargetAccuracyMin = 0.00f;
    this->MinAccuracyDistance = 0.00f;
    this->MaxAccuracyDistance = 0.00f;
    this->AccuracyDistanceMultiplier = 0.00f;
    this->NumUsesToReachTargetAccuracy = 0;
    this->UseCount = 0;
    this->AbilityWeapon = NULL;
    this->SmallPreviewImageOverride = NULL;
    this->Tooltip = NULL;
    this->StatList = NULL;
    this->CurrentAbilityCameraModeClass = NULL;
}

