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
    this->ClearActorPendingNonInteractionTime = 1;
    this->LongInteractAudioComponent = NULL;
    this->PossibleInteractContextInfo = CreateDefaultSubobject<UFortInteractContextInfo>(TEXT("PossibleInteractContextInfo"));
    this->InteractResponse = NULL;
    this->InteractActor = NULL;
    this->bInteractTraceStartsAtClosestPointDistance = true;
    this->bFilterInteractTracesBehindMyFortPawn = true;
    this->bFilterInteractTracesBehindMyFortPawnOtherThanBuildingActors = false;
    this->bDoNotFilterBuildingActorsThatAreAttachedToPawn = true;
    this->bFilterInteractTracesBehindMyFortPawnOnlyWithMultipleResults = true;
    this->bInteractTracesWithStartPenetratingBlock = true;
    this->bUseReticleAimingIfInitialBlockingInteractTraceBehindMyFortPawn = true;
    this->InteractTracesCapsuleReductionPct = 1;
    this->MobileUpdateCachedInteractActorsCooldown = 1;
    this->MobileUpdateCachedInteractActorsCooldownLength = 1;
    this->bTapInteractEnabled = false;
    this->TouchInteractMode = ETouchInteractMode::Off;
    this->bAllowRetryUse = true;
    this->bAthena = false;
    this->bUsePlayerInsteadOfCameraForTraces = false;
    this->bShouldBlockInteractionsForAllVehiclePassengers = false;
    this->AutoDoorInteractResponse = NULL;
}

