#include "AthenaBigBaseWall.h"
#include "Net/UnrealNetwork.h"




void AAthenaBigBaseWall::OnRep_WallGravity() {
}

void AAthenaBigBaseWall::OnRep_TimeUntilWallComesDown() {
}

void AAthenaBigBaseWall::OnRep_ResetBool() {
}

void AAthenaBigBaseWall::OnRep_BarrierState() {
}


void AAthenaBigBaseWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaBigBaseWall, WallGravity);
    DOREPLIFETIME(AAthenaBigBaseWall, TimeUntilWallComesDown);
    DOREPLIFETIME(AAthenaBigBaseWall, bResetBool);
    DOREPLIFETIME(AAthenaBigBaseWall, BarrierState);
}

AAthenaBigBaseWall::AAthenaBigBaseWall() {
    WallGravity = 1;
    TimeUntilWallComesDown = 1;
    bResetBool = false;
    BarrierState = EBarrierState::BarrierUp;
}

