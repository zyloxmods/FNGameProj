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
    NumSpawnSlots = 0;
    SpawnOffsetRadius = 1;
    FlightStartTime = 1;
    FlightEndTime = 1;
    DropStartTime = 1;
    DropEndTime = 1;
    bIsOutOfPhaseAircraft = false;
    ReplicatedFlightTimestamp = 1;
    FlightElapsedTime = 1;
    ClientFlightTimerDrift = 1;
    MiniMapIconScale = 1;
    MiniMapTeamIndicatorIconScale = 1;
    DefaultBusSkin = NULL;
    SpawnedCosmeticActor = NULL;
    AsyncLoadingSkin = NULL;
    AircraftIndex = 0;
    Indicator = NULL;
    TeamIndicator = NULL;
}

