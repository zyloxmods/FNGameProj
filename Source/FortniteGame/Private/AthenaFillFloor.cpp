#include "AthenaFillFloor.h"
#include "Net/UnrealNetwork.h"

void AAthenaFillFloor::StopMovement(const FHitResult& ImpactResult, float Time) {
}



void AAthenaFillFloor::OnRep_StepIndex() {
}

void AAthenaFillFloor::OnRep_IsMoving() {
}

void AAthenaFillFloor::OnRep_FloorZ() {
}

void AAthenaFillFloor::OnLavaOverlap(AFortPlayerPawnAthena* Pawn) {
}


void AAthenaFillFloor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaFillFloor, StepIndex);
    DOREPLIFETIME(AAthenaFillFloor, FloorZ);
    DOREPLIFETIME(AAthenaFillFloor, FloorMovementSpeed);
    DOREPLIFETIME(AAthenaFillFloor, bIsMoving);
}

AAthenaFillFloor::AAthenaFillFloor() {
    this->StepIndex = -1;
    this->FloorZ = 0.00f;
    this->FloorMovementSpeed = 0.00f;
    this->bIsMoving = false;
}

