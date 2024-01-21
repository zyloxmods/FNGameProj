#include "FortControllerComponent_Interaction.h"
#include "FortInteractContextInfo.h"

void UFortControllerComponent_Interaction::ServerAttemptInteract_Implementation(AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, TInteractionType InteractType, UObject* OptionalObjectData) {
}
bool UFortControllerComponent_Interaction::ServerAttemptInteract_Validate(AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, TInteractionType InteractType, UObject* OptionalObjectData) {
    return true;
}

UFortInteractContextInfo* UFortControllerComponent_Interaction::K2_GetInteractResponse() {
    return NULL;
}

void UFortControllerComponent_Interaction::FixupInteractionWidgetsOnUnzoom() {
}

UFortControllerComponent_Interaction::UFortControllerComponent_Interaction() {
    this->LongInteractAudioComponent = NULL;
    this->PossibleInteractContextInfo = CreateDefaultSubobject<UFortInteractContextInfo>(TEXT("PossibleInteractContextInfo"));
    this->InteractResponse = NULL;
    this->InteractActor = NULL;
    this->bFilterInteractrTracesBehindMyFortPawn = true;
    this->MobileUpdateCachedInteractActorsCooldown = 0.00f;
    this->MobileUpdateCachedInteractActorsCooldownLength = 5.00f;
    this->bTapInteractEnabled = false;
    this->bHoldingUse = false;
    this->bRetryUse = false;
    this->bAllowRetryUse = true;
    this->bAthena = false;
    this->bShouldBlockInteractionsForAllVehiclePassengers = false;
    this->AutoDoorInteractResponse = NULL;
}

