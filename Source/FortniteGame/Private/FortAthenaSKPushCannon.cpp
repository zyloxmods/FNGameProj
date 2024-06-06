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
    MovementParam = 1;
    BatteryParam = 1;
    RumbleIntensity = 1;
    DriverCameraShake = NULL;
    PassengerCameraShake = NULL;
    bPlayerTorquingRepped = false;
    bPlayerTorquing = false;
    CannonBoneIdx = 0;
    PushCannonNoSleepPhysicsMaterial = NULL;
    PushCannonPhysicsMaterial = NULL;
}

