#include "FortAthenaMutator_Nitrogen.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Nitrogen::OnRep_SortedTeamDataByScore() {
}

void AFortAthenaMutator_Nitrogen::OnRep_NitrogenGamePhase() {
}

void AFortAthenaMutator_Nitrogen::OnRep_CurrentFares() {
}

void AFortAthenaMutator_Nitrogen::OnNitrogenVehiclePlayerExit(const AFortPlayerControllerAthena* PlayerController, AFortAthenaVehicle* Vehicle) {
}

void AFortAthenaMutator_Nitrogen::OnNitrogenVehicleDriverChanged(const AFortPlayerControllerAthena* NewController, AFortAthenaVehicle* Vehicle) {
}

void AFortAthenaMutator_Nitrogen::OnNitrogenVehicleDestroyed(AActor* VehicleDestroyed) {
}

void AFortAthenaMutator_Nitrogen::HandlePlayerTeleportComplete(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Nitrogen::HandleGroupTeleportComplete() {
}

void AFortAthenaMutator_Nitrogen::HandleGameStartCountdownEnd() {
}

void AFortAthenaMutator_Nitrogen::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Nitrogen, NitrogenGamePhase);
    DOREPLIFETIME(AFortAthenaMutator_Nitrogen, SortedTeamDataByScore);
    DOREPLIFETIME(AFortAthenaMutator_Nitrogen, NitrogenVehiclesList);
    DOREPLIFETIME(AFortAthenaMutator_Nitrogen, CurrentFares);
    DOREPLIFETIME(AFortAthenaMutator_Nitrogen, CurrentActiveFares);
}

AFortAthenaMutator_Nitrogen::AFortAthenaMutator_Nitrogen() {
    this->NitrogenPlayerComponentClass = NULL;
    this->NavArrowClass = NULL;
    this->ExplosionDamageMultiplierGE = NULL;
    this->NitrogenFareClass = NULL;
    this->PickUpTraversePointClass = NULL;
    this->DropOffTraversePointClass = NULL;
    this->DropOffWidgetActorClass = NULL;
    this->NearbyVehicleWidgetActorClass = NULL;
    this->NitrogenGamePhase = ENitrogenGamePhase::None;
    this->NitrogenVehicleClass = NULL;
    this->TeleportMutator = NULL;
    this->GameStartCountdownMutator = NULL;
    this->InventoryMutator = NULL;
    this->ClientNavArrow = NULL;
}

