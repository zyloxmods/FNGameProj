#include "FortAthenaAircraft.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaAircraft::OnRep_ReplicatedFlightTimestamp() {
}

float AFortAthenaAircraft::GetDropStartTime() const {
    return 0.0f;
}

float AFortAthenaAircraft::GetDropEndTime() const {
    return 0.0f;
}

void AFortAthenaAircraft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaAircraft, FlightInfo);
    DOREPLIFETIME(AFortAthenaAircraft, FlightStartTime);
    DOREPLIFETIME(AFortAthenaAircraft, FlightEndTime);
    DOREPLIFETIME(AFortAthenaAircraft, DropStartTime);
    DOREPLIFETIME(AFortAthenaAircraft, DropEndTime);
    DOREPLIFETIME(AFortAthenaAircraft, bIsOutOfPhaseAircraft);
    DOREPLIFETIME(AFortAthenaAircraft, ReplicatedFlightTimestamp);
    DOREPLIFETIME(AFortAthenaAircraft, AircraftIndex);
}

AFortAthenaAircraft::AFortAthenaAircraft() {
    this->NumSpawnSlots = 0;
    this->SpawnOffsetRadius = 1;
    this->FlightStartTime = 1;
    this->FlightEndTime = 1;
    this->DropStartTime = 1;
    this->DropEndTime = 1;
    this->bIsOutOfPhaseAircraft = false;
    this->ReplicatedFlightTimestamp = 1;
    this->FlightElapsedTime = 1;
    this->ClientFlightTimerDrift = 1;
    this->MiniMapIconScale = 1;
    this->MiniMapTeamIndicatorIconScale = 1;
    this->DefaultBusSkin = NULL;
    this->SpawnedCosmeticActor = NULL;
    this->AsyncLoadingSkin = NULL;
    this->AircraftIndex = 0;
    this->Indicator = NULL;
    this->TeamIndicator = NULL;
}

