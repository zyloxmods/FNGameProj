#include "FortControllerComponent_Interaction.h"
#include "FortInteractContextInfo.h"

void UFortControllerComponent_Interaction::ServerNotifyStartLongUse_Implementation(AActor* ReceivingActor) {
}
bool UFortControllerComponent_Interaction::ServerNotifyStartLongUse_Validate(AActor* ReceivingActor) {
    return true;
}

void UFortControllerComponent_Interaction::ServerNotifyEndLongUse_Implementation(AActor* ReceivingActor) {
}
bool UFortControllerComponent_Interaction::ServerNotifyEndLongUse_Validate(AActor* ReceivingActor) {
    return true;
}

void UFortControllerComponent_Interaction::ServerAttemptInteract_Implementation(AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, TInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestID) {
}
bool UFortControllerComponent_Interaction::ServerAttemptInteract_Validate(AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, TInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestID) {
    return true;
}

UFortInteractContextInfo* UFortControllerComponent_Interaction::K2_GetInteractResponse() {
    return NULL;
}

AActor* UFortControllerComponent_Interaction::GetInteractActor() const {
    return NULL;
}

void UFortControllerComponent_Interaction::FixupInteractionWidgetsOnUnzoom() {
}

UFortControllerComponent_Interaction::UFortControllerComponent_Interaction() {
    ClearActorPendingNonInteractionTime = 1;
    LongInteractAudioComponent = NULL;
    PossibleInteractContextInfo = CreateDefaultSubobject<UFortInteractContextInfo>(TEXT("PossibleInteractContextInfo"));
    InteractResponse = NULL;
    InteractActor = NULL;
    bInteractTraceStartsAtClosestPointDistance = true;
    bFilterInteractTracesBehindMyFortPawn = true;
    bFilterInteractTracesBehindMyFortPawnOtherThanBuildingActors = false;
    bDoNotFilterBuildingActorsThatAreAttachedToPawn = true;
    bFilterInteractTracesBehindMyFortPawnOnlyWithMultipleResults = true;
    bInteractTracesWithStartPenetratingBlock = true;
    bUseReticleAimingIfInitialBlockingInteractTraceBehindMyFortPawn = true;
    InteractTracesCapsuleReductionPct = 1;
    MobileUpdateCachedInteractActorsCooldown = 1;
    MobileUpdateCachedInteractActorsCooldownLength = 1;
    bTapInteractEnabled = false;
    TouchInteractMode = ETouchInteractMode::Off;
    bAllowRetryUse = true;
    bAthena = false;
    bUsePlayerInsteadOfCameraForTraces = false;
    bShouldBlockInteractionsForAllVehiclePassengers = false;
    AutoDoorInteractResponse = NULL;
}

