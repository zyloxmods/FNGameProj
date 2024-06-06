#include "BuildingTrapFloor_Waypoint.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"




void ABuildingTrapFloor_Waypoint::OnRep_WaypointGroup() {
}

bool ABuildingTrapFloor_Waypoint::IsCurrentWaypoint(AFortPlayerPawn* Pawn) {
    return false;
}

void ABuildingTrapFloor_Waypoint::CaptureWaypoint(AFortPlayerPawn* Capturer) {
}

void ABuildingTrapFloor_Waypoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingTrapFloor_Waypoint, Index);
    DOREPLIFETIME(ABuildingTrapFloor_Waypoint, WaypointGroup);
}

ABuildingTrapFloor_Waypoint::ABuildingTrapFloor_Waypoint() {
    bIsActive = true;
    NextPoint = NULL;
    PreviousPoint = NULL;
    SplinePointLocation = CreateDefaultSubobject<USceneComponent>(TEXT("SplineLocation"));
    DeactivatedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DeactivatedMesh"));
    WaypointGroup = NULL;
    CachedWaypointGroup = NULL;
}

