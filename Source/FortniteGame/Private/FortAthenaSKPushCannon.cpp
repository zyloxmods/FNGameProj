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
    this->MovementParam = 1;
    this->BatteryParam = 1;
    this->RumbleIntensity = 1;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->bPlayerTorquingRepped = false;
    this->bPlayerTorquing = false;
    this->CannonBoneIdx = 0;
    this->PushCannonNoSleepPhysicsMaterial = NULL;
    this->PushCannonPhysicsMaterial = NULL;
}

