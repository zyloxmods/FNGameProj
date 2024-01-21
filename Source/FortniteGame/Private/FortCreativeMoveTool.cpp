#include "FortCreativeMoveTool.h"
#include "Net/UnrealNetwork.h"

void AFortCreativeMoveTool::UnholsterWeapon() {
}

void AFortCreativeMoveTool::TurboBuildAttemptToPlace() {
}

void AFortCreativeMoveTool::SetupMIDForComponent(UMeshComponent* MeshComponent) {
}

void AFortCreativeMoveTool::SetTargetingState(bool bNewTargetingState) {
}

void AFortCreativeMoveTool::ServerUpdateTractorBeam_Implementation(float NewTargetTractorBeamOffset, bool bNewIsPushPressed, bool bNewIsPullPressed) {
}
bool AFortCreativeMoveTool::ServerUpdateTractorBeam_Validate(float NewTargetTractorBeamOffset, bool bNewIsPushPressed, bool bNewIsPullPressed) {
    return true;
}

void AFortCreativeMoveTool::ServerUpdateScalePressed_Implementation(bool bNewIsScaleUpPressed, bool bNewIsScaleDownPressed) {
}
bool AFortCreativeMoveTool::ServerUpdateScalePressed_Validate(bool bNewIsScaleUpPressed, bool bNewIsScaleDownPressed) {
    return true;
}

void AFortCreativeMoveTool::ServerUpdateScaleAxis_Implementation(EScaleAxis SelectedAxis) {
}
bool AFortCreativeMoveTool::ServerUpdateScaleAxis_Validate(EScaleAxis SelectedAxis) {
    return true;
}

void AFortCreativeMoveTool::ServerUpdateRotationAxis_Implementation(uint8 AxisIndex) {
}
bool AFortCreativeMoveTool::ServerUpdateRotationAxis_Validate(uint8 AxisIndex) {
    return true;
}

void AFortCreativeMoveTool::ServerUpdateRotation_Implementation(FQuat ClientRotation, bool bNewIsRotateClockwisePressed, bool bNewIsRotateCounterclockwisePressed) {
}
bool AFortCreativeMoveTool::ServerUpdateRotation_Validate(FQuat ClientRotation, bool bNewIsRotateClockwisePressed, bool bNewIsRotateCounterclockwisePressed) {
    return true;
}

void AFortCreativeMoveTool::ServerUpdatePrecisionMode_Implementation(bool bPrecisionMode, uint8 PrecisionModeIndex) {
}
bool AFortCreativeMoveTool::ServerUpdatePrecisionMode_Validate(bool bPrecisionMode, uint8 PrecisionModeIndex) {
    return true;
}

void AFortCreativeMoveTool::ServerUpdateMirrored_Implementation(bool bMirrored) {
}
bool AFortCreativeMoveTool::ServerUpdateMirrored_Validate(bool bMirrored) {
    return true;
}

void AFortCreativeMoveTool::ServerStartInteracting_Implementation(const TArray<AActor*>& Actors, const FTransform DragStart) {
}
bool AFortCreativeMoveTool::ServerStartInteracting_Validate(const TArray<AActor*>& Actors, const FTransform DragStart) {
    return true;
}

void AFortCreativeMoveTool::ServerSpawnSelectedActorsWithTransform_Implementation(const bool bAllowOverlap, const bool bAllowGravity, const bool bIgnoreStructuralIssues, const bool bForPreviewing) {
}
bool AFortCreativeMoveTool::ServerSpawnSelectedActorsWithTransform_Validate(const bool bAllowOverlap, const bool bAllowGravity, const bool bIgnoreStructuralIssues, const bool bForPreviewing) {
    return true;
}

void AFortCreativeMoveTool::ServerSpawnActorWithTransform_Implementation(AActor* ActorToSpawn, FTransform TargetTransform, const bool bAllowOverlap, const bool bAllowGravity, const bool bIgnoreStructuralIssues, const bool bForPreviewing) {
}
bool AFortCreativeMoveTool::ServerSpawnActorWithTransform_Validate(AActor* ActorToSpawn, FTransform TargetTransform, const bool bAllowOverlap, const bool bAllowGravity, const bool bIgnoreStructuralIssues, const bool bForPreviewing) {
    return true;
}

void AFortCreativeMoveTool::ServerSetAllowGravity_Implementation(bool bAllow) {
}
bool AFortCreativeMoveTool::ServerSetAllowGravity_Validate(bool bAllow) {
    return true;
}

void AFortCreativeMoveTool::ServerResetScale_Implementation() {
}
bool AFortCreativeMoveTool::ServerResetScale_Validate() {
    return true;
}

void AFortCreativeMoveTool::ServerPlaceActorsAndClearMovementMode_Implementation(FTransform TargetTransformForBuildings) {
}
bool AFortCreativeMoveTool::ServerPlaceActorsAndClearMovementMode_Validate(FTransform TargetTransformForBuildings) {
    return true;
}

void AFortCreativeMoveTool::ServerOnNewlyPlacedActorProcessedByClient_Implementation(FOriginalAndSpawnedPair NewlyPlacedActorPair) {
}
bool AFortCreativeMoveTool::ServerOnNewlyPlacedActorProcessedByClient_Validate(FOriginalAndSpawnedPair NewlyPlacedActorPair) {
    return true;
}

void AFortCreativeMoveTool::ServerMoveSelectionSet_Implementation(const FTransform NewSelectionToWorld, const bool bShouldUpdateOwningClient) {
}
bool AFortCreativeMoveTool::ServerMoveSelectionSet_Validate(const FTransform NewSelectionToWorld, const bool bShouldUpdateOwningClient) {
    return true;
}

void AFortCreativeMoveTool::ServerDuplicateStartInteracting_Implementation(const TArray<AActor*>& Actors, const FTransform DragStart) {
}
bool AFortCreativeMoveTool::ServerDuplicateStartInteracting_Validate(const TArray<AActor*>& Actors, const FTransform DragStart) {
    return true;
}

void AFortCreativeMoveTool::ServerDestroyActor_Implementation(AActor* ActorToDestroy) {
}
bool AFortCreativeMoveTool::ServerDestroyActor_Validate(AActor* ActorToDestroy) {
    return true;
}

void AFortCreativeMoveTool::ServerClearQuickBarSlot_Implementation(const int32 DesiredSlotIndex) {
}
bool AFortCreativeMoveTool::ServerClearQuickBarSlot_Validate(const int32 DesiredSlotIndex) {
    return true;
}

void AFortCreativeMoveTool::ServerClearMovementMode_Implementation(const bool bExited) {
}
bool AFortCreativeMoveTool::ServerClearMovementMode_Validate(const bool bExited) {
    return true;
}

void AFortCreativeMoveTool::ServerAddToQuickBar_Implementation(const TArray<AActor*>& Actors, const int32 DesiredSlotIndex) {
}
bool AFortCreativeMoveTool::ServerAddToQuickBar_Validate(const TArray<AActor*>& Actors, const int32 DesiredSlotIndex) {
    return true;
}

void AFortCreativeMoveTool::RemoteClientsUpdateSelectedActors_Implementation(const TArray<FCreativeSelectedActorInfo>& NewSelectedActors, UObjectInteractionBehavior* CurrentObjectInteractionBehvaior) {
}

void AFortCreativeMoveTool::OnWantsPrecisionGridSnapping(UFortCreativeOption* CreativeOption, uint8 Index) {
}

void AFortCreativeMoveTool::OnWantsGravityOnPlace(UFortCreativeOption* CreativeOption, uint8 Index) {
}

void AFortCreativeMoveTool::OnWantedHitTraceRule(UFortCreativeOption* CreativeOption, uint8 Index) {
}



void AFortCreativeMoveTool::OnRep_SelectionProperty() {
}

void AFortCreativeMoveTool::OnRep_NewlyPlacedActors() {
}

void AFortCreativeMoveTool::OnRep_CutActors() {
}

void AFortCreativeMoveTool::OnRep_AllowGravityOnPlace() {
}


void AFortCreativeMoveTool::OnQuickbarFocusChanged(EFortQuickBars QuickBar, int32 SlotIdx) {
}

void AFortCreativeMoveTool::OnQuickbarEnabledChanged(bool bIsEnabled) {
}






void AFortCreativeMoveTool::OnFinishedSpawningCurrentSave(const FAsyncTaskResult& Result) {
}


void AFortCreativeMoveTool::MulticastUpdateSelectionSetExceptServerAndOwningClient_Implementation(const FTransform NewTransformToWorld) {
}

void AFortCreativeMoveTool::MulticastUpdateSelectionSetExceptServer_Implementation(const FTransform NewTransformToWorld) {
}

void AFortCreativeMoveTool::MulticastSetCollisionForActor_Implementation(AActor* Actor, bool bEnableCollision) {
}

void AFortCreativeMoveTool::MulticastRestoreCutActors_Implementation() {
}

void AFortCreativeMoveTool::MulticastForceMoveActorExceptOwningClient_Implementation(AActor* ActorToMove, const FTransform NewTransform) {
}

void AFortCreativeMoveTool::MulticastForceMoveActor_Implementation(AActor* ActorToMove, const FTransform NewTransform) {
}

bool AFortCreativeMoveTool::IsRunningOnOwningClient() {
    return false;
}

bool AFortCreativeMoveTool::IsMultiselectingMoveOnGrid() {
    return false;
}

bool AFortCreativeMoveTool::IsMultiSelecting() {
    return false;
}

void AFortCreativeMoveTool::IncrementOrWrapHitTraceRuleOnClient() {
}

void AFortCreativeMoveTool::HandleTransformModeUpPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleTransformModeDownPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleScaleUpReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleScaleUpPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleScaleSwitchAxisReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleScaleSwitchAxisPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleScaleDownReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleScaleDownPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateSwitchAxisReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateSwitchAxisPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateSingleCounterclockwiseReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateSingleCounterclockwisePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateSingleClockwiseReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateSingleClockwisePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateCounterclockwiseReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateCounterclockwisePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateClockwiseReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleRotateClockwisePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleResetScaleHeldDownLongEnough_Implementation() {
}

void AFortCreativeMoveTool::HandleResetRotationHeldDownLongEnough_Implementation() {
}

void AFortCreativeMoveTool::HandleQuickbarSelectPreviousPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleQuickbarSelectNextPressed_Implementation() {
}

void AFortCreativeMoveTool::HandlePushReleased_Implementation() {
}

void AFortCreativeMoveTool::HandlePushPressed_Implementation() {
}

void AFortCreativeMoveTool::HandlePullReleased_Implementation() {
}

void AFortCreativeMoveTool::HandlePullPressed_Implementation() {
}

void AFortCreativeMoveTool::HandlePrecisionModeReleased_Implementation() {
}

void AFortCreativeMoveTool::HandlePrecisionModePressed_Implementation() {
}

void AFortCreativeMoveTool::HandlePickupPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleMirrorPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleHitTraceRuleReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleHitTraceRulePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleHitTraceRuleHeldDownLongEnough_Implementation() {
}

void AFortCreativeMoveTool::HandleExitReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleExitPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleExitOrDeletePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleExitHeldDownLongEnough_Implementation() {
}

void AFortCreativeMoveTool::HandleDuplicateActorReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleDuplicateActorPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleDropToFloorPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleDeleteReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleDeletePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleCreativeQuickbarPressed_Implementation(int32 SlotIndex) {
}

void AFortCreativeMoveTool::HandleCopyPickupReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleCopyPickupPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleClearMultiSelectQueuePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleClearFocusedQuickbarSlotPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleAddToQuickBarPressed_Implementation() {
}

void AFortCreativeMoveTool::HandleActorSelectedForQueueReleased_Implementation() {
}

void AFortCreativeMoveTool::HandleActorSelectedForQueuePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleActivateTranslateModePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleActivateScaleModePressed_Implementation() {
}

void AFortCreativeMoveTool::HandleActivateRotationModePressed_Implementation() {
}

void AFortCreativeMoveTool::GetValidQueuedActorsAsArray(TArray<AActor*>& ValidQueuedActors) {
}

int32 AFortCreativeMoveTool::GetMultiselectLimit() {
    return 0;
}

float AFortCreativeMoveTool::GetAverageScaleModifier() const {
    return 0.0f;
}

bool AFortCreativeMoveTool::GetAllowGravityOnPlace() const {
    return false;
}

bool AFortCreativeMoveTool::DoesCreativeQuickbarSlotHaveContent(int32 SlotIndex) const {
    return false;
}

void AFortCreativeMoveTool::DeactiveWeaponAndState() {
}

void AFortCreativeMoveTool::ClientStopInteracting_Implementation() {
}

void AFortCreativeMoveTool::ClientStartInteracting_Implementation(UObjectInteractionBehavior* NewActiveMovementMode, const TArray<FCreativeSelectedActorInfo>& NewSelectedActors, const FTransform& NewSelectionToWorld, const FBox& NewSelectionSpaceActorBounds) {
}

void AFortCreativeMoveTool::ClientDeactiveWeaponAndState_Implementation() {
}

void AFortCreativeMoveTool::ClientClearQuickBarSlotComplete_Implementation(const int32 SlotCleared) {
}

void AFortCreativeMoveTool::ClientAddToQuickBarComplete_Implementation(const int32 SlotPutIn) {
}

void AFortCreativeMoveTool::AdjustOptionsBasedOnSelectionProperty(ESelectionProperty UpdatedSelectionProperty) {
}

void AFortCreativeMoveTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCreativeMoveTool, bIsPreviewingMove);
    DOREPLIFETIME(AFortCreativeMoveTool, InteractionBehaviors);
    DOREPLIFETIME(AFortCreativeMoveTool, DeleteObjectsInteractionBehavior);
    DOREPLIFETIME(AFortCreativeMoveTool, ScaleModifier);
    DOREPLIFETIME(AFortCreativeMoveTool, SelectionProperty);
    DOREPLIFETIME(AFortCreativeMoveTool, NewlyPlacedActors);
    DOREPLIFETIME(AFortCreativeMoveTool, CutActors);
    DOREPLIFETIME(AFortCreativeMoveTool, bAllowGravityOnPlace);
    DOREPLIFETIME(AFortCreativeMoveTool, bClientNeedsToProcessNewlyPlacedActors);
}

AFortCreativeMoveTool::AFortCreativeMoveTool() {
    this->MaxRange = 10000.00f;
    this->ActiveMovementMode = NULL;
    this->bIsPreviewingMove = false;
    this->DeleteObjectsInteractionBehavior = NULL;
    this->CurrentTransformationType = ETransformationType::Translation;
    this->bIsScaleUpPressed = false;
    this->bIsMultiselectEnabled = true;
    this->bIsQuickbarEnabled = false;
    this->bIsQuickbarSupported = true;
    this->SelectionProperty = ESelectionProperty::SingleObject;
    this->bIsScaleDownPressed = false;
    this->bIsPushPressed = false;
    this->bIsPullPressed = false;
    this->bIsAutoTractorBeamRunning = false;
    this->bIsRotateClockwisePressed = false;
    this->bIsRotateCounterclockwisePressed = false;
    this->bIsScalingInsteadOfRotating = false;
    this->RotationAxes.AddDefaulted(3);
    this->RotationAxisIndex = 0;
    this->SelectedScaleAxis = EScaleAxis::All;
    this->MaxUnhoverAnimationTime = 1.00f;
    this->bShouldDestroyPropsWhenPlacing = false;
    this->bAllowGravityOnPlace = true;
    this->bShouldUsePrecisionGridSnapping = false;
    this->GridSnapIndex = 0;
    this->GridSnapRatios.AddDefaulted(5);
    this->bClientNeedsToProcessNewlyPlacedActors = false;
    this->CurrentLoadingSave = NULL;
    this->CurrentQuickbarRequestSaveRecord = NULL;
    this->bIsFocusedOnUserPrefabSlot = false;
    this->bIsFocusedOnUserPrefabSlotEmpty = false;
}

