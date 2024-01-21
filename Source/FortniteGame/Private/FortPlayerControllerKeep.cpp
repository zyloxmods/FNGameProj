#include "FortPlayerControllerKeep.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerControllerKeep::StreamOutStuff() {
}

void AFortPlayerControllerKeep::StreamInStuff() {
}

void AFortPlayerControllerKeep::SetPermaniteAvailability(bool bAvailable) {
}

void AFortPlayerControllerKeep::RestoreContainers() {
}

void AFortPlayerControllerKeep::ResetContainers() {
}

void AFortPlayerControllerKeep::DumpItemData() {
}

void AFortPlayerControllerKeep::ClientUnloadFoundations_Implementation() {
}

void AFortPlayerControllerKeep::ClientSetPermaniteAvailability_Implementation(bool bAvailable) {
}

void AFortPlayerControllerKeep::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerControllerKeep, WorkshopPickedItems);
    DOREPLIFETIME(AFortPlayerControllerKeep, ArmoryPickedItems);
}

AFortPlayerControllerKeep::AFortPlayerControllerKeep() {
    this->WorkshopPickedItems = 0;
    this->ArmoryPickedItems = 0;
}

