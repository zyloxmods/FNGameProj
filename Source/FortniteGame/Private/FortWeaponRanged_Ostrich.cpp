#include "FortWeaponRanged_Ostrich.h"
#include "Net/UnrealNetwork.h"

void AFortWeaponRanged_Ostrich::ServerSetFiringRockets_Implementation(bool bNewFiring, int32 NumToFire) {
}
bool AFortWeaponRanged_Ostrich::ServerSetFiringRockets_Validate(bool bNewFiring, int32 NumToFire) {
    return true;
}

void AFortWeaponRanged_Ostrich::ServerSetCharging_Implementation(bool bNewCharging) {
}
bool AFortWeaponRanged_Ostrich::ServerSetCharging_Validate(bool bNewCharging) {
    return true;
}

void AFortWeaponRanged_Ostrich::PlayReloadAnim() {
}

void AFortWeaponRanged_Ostrich::OnServerLoadSingleRocket() {
}

void AFortWeaponRanged_Ostrich::OnServerActivateSecondaryFire(UFortGameplayAbility* SecondaryFire, const FVector& LaunchPosition) {
}




void AFortWeaponRanged_Ostrich::OnRep_RocketsCooldown() {
}


void AFortWeaponRanged_Ostrich::LoadShotgunAmmo() {
}

float AFortWeaponRanged_Ostrich::GetTimeToLoadOneAmmoCharge() const {
    return 0.0f;
}

float AFortWeaponRanged_Ostrich::GetRocketsCooldown() const {
    return 0.0f;
}

int32 AFortWeaponRanged_Ostrich::GetMinRocketsForFiring() const {
    return 0;
}

int32 AFortWeaponRanged_Ostrich::GetMaxRockets() const {
    return 0;
}

float AFortWeaponRanged_Ostrich::GetFireRate() const {
    return 0.0f;
}

float AFortWeaponRanged_Ostrich::GetAutofireDelay() const {
    return 0.0f;
}

int32 AFortWeaponRanged_Ostrich::GetAmmoPerCharge() const {
    return 0;
}

float AFortWeaponRanged_Ostrich::GetAimPointCacheRange() const {
    return 0.0f;
}

void AFortWeaponRanged_Ostrich::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRanged_Ostrich, bRocketsOnCooldown);
}

AFortWeaponRanged_Ostrich::AFortWeaponRanged_Ostrich() {
    this->ProjectileTemplate = NULL;
    this->bRocketsOnCooldown = false;
    this->bLocalChargingRockets = false;
    this->bRocketFireButtonDown = false;
    this->RocketAmmoLocal = 0;
    this->ServerLoadedRockets = 0;
    this->bFiringRockets = false;
    this->bUseShotgunSecondBarrel = false;
    this->RocketFireTimer = 1;
    this->RocketChargeTimer = 1;
    this->RocketChargingLoop = NULL;
    this->RocketFullyChargedLoop = NULL;
    this->RocketFire = NULL;
    this->RocketFireSettle = NULL;
    this->RocketCooldownLoop = NULL;
    this->RocketCooldownReady = NULL;
    this->ShotgunFireSecondBarrel = NULL;
}

