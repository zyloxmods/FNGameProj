#include "FortPlayerStartupController.h"
#include "Net/UnrealNetwork.h"



void AFortPlayerStartupController::HandlePlayerStartupControllerReset_Implementation() {
}

void AFortPlayerStartupController::HandlePlayerStartupControllerRegistered_Implementation() {
}

void AFortPlayerStartupController::HandlePlayerStartupControllerDestroyed_Implementation() {
}

void AFortPlayerStartupController::HandlePlayerStartupControllerCreated_Implementation() {
}

void AFortPlayerStartupController::HandleAllInCountdownInitiated_Implementation() {
}

int32 AFortPlayerStartupController::GetNumPlayersStillWaitingFor() {
    return 0;
}

int32 AFortPlayerStartupController::GetNumPlayersExpected() {
    return 0;
}

int32 AFortPlayerStartupController::GetNumPlayersCurrentlyReady() {
    return 0;
}

float AFortPlayerStartupController::GetContainmentTimeRemaining() {
    return 0.0f;
}

void AFortPlayerStartupController::DropContainmentTimeToAllInCountdownTime() {
}

void AFortPlayerStartupController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerStartupController, ContainmentTimer);
}

AFortPlayerStartupController::AFortPlayerStartupController() {
    this->UseIndividualHoldingAreas = false;
    this->DelayAfterFirstInTime = 1;
    this->ContainmentTimer = 1;
    this->AllInCountdownTime = 1;
    this->ErodeShieldTime = 1;
    this->StopJoinabilityTime = 1;
    this->DestroyImmediately = false;
}

