#include "PegasusGameEventCollector.h"

void UPegasusGameEventCollector::HandleOwnerVehicleStateChange(AFortPlayerPawn* Sender, AActor* NewVehicle, AActor* OldVehicle) {
}

void UPegasusGameEventCollector::HandleOwnerEndSkyDiving() {
}

void UPegasusGameEventCollector::HandleOwnerBeginSkyDiving() {
}

void UPegasusGameEventCollector::HandleOwnerAthenaPlaceChanged(AFortPlayerStateAthena* Sender, int32 NewPlace) {
}

UPegasusGameEventCollector::UPegasusGameEventCollector() {
    this->InventoryChangesTimeSpan = 1;
    this->EndSkydivePlayerCheckRadius = 1;
    this->WeaponExecutedTimeSpan = 1;
    this->BuildingBeginPlayTimeSpan = 1;
    this->ExpensiveTestInterval = 1;
    this->SquadCohesionTestRadius = 1;
    this->PlayerResourceEventsTimeSpan = 1;
    this->EliminationEventsTimeSpan = 1;
}

