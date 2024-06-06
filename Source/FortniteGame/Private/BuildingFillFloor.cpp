#include "BuildingFillFloor.h"
#include "Net/UnrealNetwork.h"

void ABuildingFillFloor::StopMovement() {
}

void ABuildingFillFloor::StartMovement_Implementation() {
}



void ABuildingFillFloor::OnRep_StepIndex() {
}

void ABuildingFillFloor::OnRep_IsMoving() {
}

void ABuildingFillFloor::OnRep_FloorZ() {
}

void ABuildingFillFloor::OnLavaOverlap(AFortPlayerPawn* Pawn) {
}


void ABuildingFillFloor::InterpToStopCallback(const FHitResult& ImpactResult, float Time) {
}

bool ABuildingFillFloor::GetFloorPositionFromStep(int32 Step, float& MoveTime, float& Height, float& PostMoveDelay) const {
    return false;
}

void ABuildingFillFloor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingFillFloor, StepIndex);
    DOREPLIFETIME(ABuildingFillFloor, FloorZ);
    DOREPLIFETIME(ABuildingFillFloor, FloorMovementSpeed);
    DOREPLIFETIME(ABuildingFillFloor, bIsMoving);
}

ABuildingFillFloor::ABuildingFillFloor() {
    StepIndex = 0;
    FloorZ = 1;
    InitialDelay = 1;
    NumStepsToUse = 0;
    FloorMovementSpeed = 1;
    bIsMoving = false;
}

