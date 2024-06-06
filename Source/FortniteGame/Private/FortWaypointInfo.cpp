#include "FortWaypointInfo.h"
#include "Net/UnrealNetwork.h"

void AFortWaypointInfo::OnRep_SplineLocations() {
}

bool AFortWaypointInfo::IsStartingWaypoint(ABuildingTrapFloor_Waypoint* Waypoint) {
    return false;
}

bool AFortWaypointInfo::IsEndingWaypoint(ABuildingTrapFloor_Waypoint* Waypoint) {
    return false;
}

void AFortWaypointInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWaypointInfo, SplineLocations);
    DOREPLIFETIME(AFortWaypointInfo, ContextArray);
}

AFortWaypointInfo::AFortWaypointInfo() {
    Spline = NULL;
}

