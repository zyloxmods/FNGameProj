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
    TetherPawn = NULL;
    TetherPawnSavedCullDistanceSquared = 1;
    bTetheredWithoutWeapon = false;
    bPressedTetheredBoost = false;
    bAllowVehicleTether = false;
    TetherSlackLength = 1;
    TetherCatchupLength = 1;
    TetherViewPlayerLength = 1;
    TetherBreakLength = 1;
    TetheredSpeedToBackOff = 1;
    TetheredMaxSpeed = 1;
    TetheredMovementAccelBackOff = 1;
    TetheredMovementAccelNudge = 1;
    TetheredMovementGroundFrictionMultiplier = 1;
    TetheredMovementWaterFrictionMultiplier = 1;
    TetheredMovementMaxAccel = 1;
    SetViewTargetToTetherPawnDelayTime = 1;
    SetViewTargetToTetherPawnBlendTime = 1;
    TetherJumpServerCorrectionExpansionTime = 1;
    TetherInitialYankLaunchZ = 1;
    TetherRopeMesh = NULL;
    TetherRopeMaterial = NULL;
    TetherRopeComp = NULL;
    TetherRopeRodMesh = NULL;
    TetherRopeRodComp = NULL;
    TetherRightInput = 1;
    TetheredInputComponent = NULL;
    TetheredExitHoldTime = 1;
}

