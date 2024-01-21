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
    DOREPLIFETIME(AFortAthenaAircraft, ReplicatedFlightTimestamp);
    DOREPLIFETIME(AFortAthenaAircraft, AircraftIndex);
}

AFortAthenaAircraft::AFortAthenaAircraft() {
    this->NumSpawnSlots = 10;
    this->SpawnOffsetRadius = 200.00f;
    this->FlightStartTime = -1.00f;
    this->FlightEndTime = -1.00f;
    this->DropStartTime = -1.00f;
    this->DropEndTime = -1.00f;
    this->ReplicatedFlightTimestamp = 0.00f;
    this->FlightElapsedTime = 0.00f;
    this->ClientFlightTimerDrift = 0.00f;
    this->MiniMapIconScale = 0.50f;
    this->MiniMapTeamIndicatorIconScale = 0.50f;
    this->DefaultBusSkin = NULL;
    this->SpawnedCosmeticActor = NULL;
    this->AsyncLoadingSkin = NULL;
    this->AircraftIndex = 0;
    this->Indicator = NULL;
    this->TeamIndicator = NULL;
}

