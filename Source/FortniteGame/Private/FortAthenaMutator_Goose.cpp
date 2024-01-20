#include "FortAthenaMutator_Goose.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Goose::OnVehicleStolen(uint8 OldID, uint8 NewID) {
}

void AFortAthenaMutator_Goose::OnVehicleDied(AFortAthenaVehicle* DestroyedVehicle, const FGameplayTagContainer& InTags, AController* EventInstigator, AActor* DamageCauser) {
}

void AFortAthenaMutator_Goose::OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags) {
}

void AFortAthenaMutator_Goose::OnPawnDied(AFortPlayerPawnAthena* PlayerPawn) {
}

void AFortAthenaMutator_Goose::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_Goose::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Goose, SquadInfoArray);
}

AFortAthenaMutator_Goose::AFortAthenaMutator_Goose() {
    this->VehicleClass = NULL;
    this->SiphonEffectForPlanes = NULL;
    this->PickupClass = NULL;
    this->BoundsXYSplineClass = NULL;
}

