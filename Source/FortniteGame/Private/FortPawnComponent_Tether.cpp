#include "FortPawnComponent_Tether.h"
#include "Net/UnrealNetwork.h"

void UFortPawnComponent_Tether::TetheredExitReleased() {
}

void UFortPawnComponent_Tether::TetheredExitPressed() {
}

void UFortPawnComponent_Tether::TetheredBoostReleased() {
}

void UFortPawnComponent_Tether::TetheredBoostPressed() {
}

void UFortPawnComponent_Tether::SetViewTargetToTetherPawn() {
}

void UFortPawnComponent_Tether::ServerRequestTetherJump_Implementation() {
}

void UFortPawnComponent_Tether::ServerReleaseTether_Implementation() {
}

void UFortPawnComponent_Tether::OnRep_TetherPawn(APawn* OldTetherPawn) {
}

void UFortPawnComponent_Tether::OnRep_TetheredWithoutWeapon() {
}

void UFortPawnComponent_Tether::GamepadTetheredExitAndReloadReleased() {
}

void UFortPawnComponent_Tether::DelayedSetViewTargetToTetherPawn() {
}

void UFortPawnComponent_Tether::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPawnComponent_Tether, TetherPawn);
    DOREPLIFETIME(UFortPawnComponent_Tether, bTetheredWithoutWeapon);
}

UFortPawnComponent_Tether::UFortPawnComponent_Tether() {
    this->TetherPawn = NULL;
    this->TetherPawnSavedCullDistanceSquared = 1;
    this->bTetheredWithoutWeapon = false;
    this->bPressedTetheredBoost = false;
    this->bAllowVehicleTether = false;
    this->TetherSlackLength = 1;
    this->TetherCatchupLength = 1;
    this->TetherViewPlayerLength = 1;
    this->TetherBreakLength = 1;
    this->TetheredSpeedToBackOff = 1;
    this->TetheredMaxSpeed = 1;
    this->TetheredMovementAccelBackOff = 1;
    this->TetheredMovementAccelNudge = 1;
    this->TetheredMovementGroundFrictionMultiplier = 1;
    this->TetheredMovementWaterFrictionMultiplier = 1;
    this->TetheredMovementMaxAccel = 1;
    this->SetViewTargetToTetherPawnDelayTime = 1;
    this->SetViewTargetToTetherPawnBlendTime = 1;
    this->TetherJumpServerCorrectionExpansionTime = 1;
    this->TetherInitialYankLaunchZ = 1;
    this->TetherRopeMesh = NULL;
    this->TetherRopeMaterial = NULL;
    this->TetherRopeComp = NULL;
    this->TetherRopeRodMesh = NULL;
    this->TetherRopeRodComp = NULL;
    this->TetherRightInput = 1;
    this->TetheredInputComponent = NULL;
    this->TetheredExitHoldTime = 1;
}

