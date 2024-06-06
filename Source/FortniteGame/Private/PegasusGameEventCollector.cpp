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
    InventoryChangesTimeSpan = 1;
    EndSkydivePlayerCheckRadius = 1;
    WeaponExecutedTimeSpan = 1;
    BuildingBeginPlayTimeSpan = 1;
    ExpensiveTestInterval = 1;
    SquadCohesionTestRadius = 1;
    PlayerResourceEventsTimeSpan = 1;
    EliminationEventsTimeSpan = 1;
}

