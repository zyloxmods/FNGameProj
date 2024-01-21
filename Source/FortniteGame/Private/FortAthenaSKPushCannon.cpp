#include "FortAthenaSKPushCannon.h"
#include "Net/UnrealNetwork.h"


void AFortAthenaSKPushCannon::ServerSetPassengerTorquing_Implementation(bool bSetTo) {
}
bool AFortAthenaSKPushCannon::ServerSetPassengerTorquing_Validate(bool bSetTo) {
    return true;
}





void AFortAthenaSKPushCannon::MultiCastPushCannonLaunchedPlayer_Implementation() {
}

FRotator AFortAthenaSKPushCannon::GetCurrentWorldAimOrientationCorrected() const {
    return FRotator{};
}

void AFortAthenaSKPushCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaSKPushCannon, bPlayerTorquingRepped);
}

AFortAthenaSKPushCannon::AFortAthenaSKPushCannon() {
    this->MovementParam = 0.00f;
    this->BatteryParam = 0.00f;
    this->RumbleIntensity = 0.00f;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->bPlayerTorquingRepped = false;
    this->bPlayerTorquing = false;
}

