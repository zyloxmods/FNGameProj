#include "FortControllerComponent_Aircraft.h"

void UFortControllerComponent_Aircraft::ServerAttemptAircraftJump_Implementation(FRotator ClientRotation) {
}
bool UFortControllerComponent_Aircraft::ServerAttemptAircraftJump_Validate(FRotator ClientRotation) {
    return true;
}

bool UFortControllerComponent_Aircraft::IsInAircraft() const {
    return false;
}

void UFortControllerComponent_Aircraft::ClientExitAircraft_Implementation() {
}

void UFortControllerComponent_Aircraft::ClientEnterAircraft_Implementation(AFortAircraft* InAircraft) {
}

UFortControllerComponent_Aircraft::UFortControllerComponent_Aircraft() {
    CurrentAircraft = NULL;
}

