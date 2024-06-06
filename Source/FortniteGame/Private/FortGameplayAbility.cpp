#include "FortGameplayAbility.h"
#include "Templates/SubclassOf.h"

void UFortGameplayAbility::TrackGroupedActor(AActor* ActorToTrack, FGameplayTag GroupTag) {
}

void UFortGameplayAbility::TrackActor(AActor* ActorToTrack) {
}

bool UFortGameplayAbility::ShouldPlayFailedMontage_Implementation(const FGameplayTagContainer& FailedReason) const {
    return false;
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

bool UFortGameplayAbility::IsChargeUpAbility() const {
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

float UFortGameplayAbility::GetChargeTime() const {
    return 0.0f;
}

EFortAbilityChargeState UFortGameplayAbility::GetChargeState() const {
    return EFortAbilityChargeState::None;
}

float UFortGameplayAbility::GetChargePercent() const {
    return 0.0f;
}

void UFortGameplayAbility::GetAvatarAsValidFortPlayerPawn(EFortGetPlayerPawnExecutions& OutExec, AFortPlayerPawn*& OutFortPlayerPawn) {
}

AFortPlayerPawn* UFortGameplayAbility::GetAvatarAsFortPlayerPawn() const {
    return NULL;
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

FGameplayTagContainer UFortGameplayAbility::GetAbilityTags() const {
    return FGameplayTagContainer{};
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

void UFortGameplayAbility::CalculateProjectileTrajectorySplineWithHitProfile(FHitResult& OutHitResult, TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, FName CollisionProfile, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance) {
}

void UFortGameplayAbility::CalculateProjectileTrajectorySplineWithHit(FHitResult& OutHitResult, TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, TEnumAsByte<ECollisionChannel> TraceChannel, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance) {
}

void UFortGameplayAbility::CalculateProjectileTrajectorySplineProfile(TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, FName CollisionProfile, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance) {
}

void UFortGameplayAbility::CalculateProjectileTrajectorySpline(TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, TEnumAsByte<ECollisionChannel> TraceChannel, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance) {
}

void UFortGameplayAbility::BP_GetGameplayEffectContainers(FGameplayTag ApplicationTag, TArray<FFortGameplayEffectContainer>& OutContainers) {
}

FFortGameplayEffectContainer UFortGameplayAbility::BP_GetGameplayEffectContainer(FGameplayTag ApplicationTag) {
    return FFortGameplayEffectContainer{};
}

FGameplayTagContainer UFortGameplayAbility::BP_GetCooldownTags() const {
    return FGameplayTagContainer{};
}

bool UFortGameplayAbility::ApplySourcePropertyOverrides(TArray<FName>& OverriddenPropertyNames) {
    return false;
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
    ActivationType = EFortGameplayAbilityActivation::Passive;
    ProjectileClass = NULL;
    bShowWidgetForCosts = true;
    bApplyingCostsEnabled = true;
    bStartWithCooldown = false;
    bPersistOnDeath = true;
    bDisableMoveCombining = false;
    bIgnoreClientActivationAttempts = false;
    bStopsAIBehaviorLogic = false;
    bStopsAIMovement = false;
    bStopsRVOAvoidance = false;
    bForceNormalAILOD = false;
    MinimumRequiredAILODLevel = EFortAILODLevel::MIN;
    bRelevantForAIDespawning = true;
    bUseTetheredPawnAsInstigator = false;
    bAcceptTargetActorVehicleForCanHitTests = false;
    bUseAIFireLocationAndRotation = false;
    AIWeaponUsage = EFortAIWeaponUsage::NoWeaponUsage;
    bVerifyFireOffsetIsNotObstructedByWorldGeometry = false;
    bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = true;
    ActivationNoiseRange = 1;
    ImpactNoiseRange = 1;
    ActivationNoiseLoudness = 1;
    ImpactNoiseLoudness = 1;
    bLeadPawnTargets = false;
    DesiredThrowAngle = 1;
    MaxYawAngleToFire = 1;
    bClampMaxYawAngleToFire = false;
    bUseTargetActorLocation = false;
    InitialAccuracyMax = 1;
    InitialAccuracyMin = 1;
    TargetAccuracyMax = 1;
    TargetAccuracyMin = 1;
    MinAccuracyDistance = 1;
    MaxAccuracyDistance = 1;
    AccuracyDistanceMultiplier = 1;
    NumUsesToReachTargetAccuracy = 0;
    UseCount = 0;
    bIsMobileToggle = false;
    AbilityWeapon = NULL;
    SmallPreviewImageOverride = NULL;
    ChargeStartTime = 1;
    ChargeState = EFortAbilityChargeState::None;
    Tooltip = NULL;
    StatList = NULL;
    CurrentAbilityCameraModeClass = NULL;
}