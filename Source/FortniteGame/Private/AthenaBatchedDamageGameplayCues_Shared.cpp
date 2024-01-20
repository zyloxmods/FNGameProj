#include "AthenaBatchedDamageGameplayCues_Shared.h"

FAthenaBatchedDamageGameplayCues_Shared::FAthenaBatchedDamageGameplayCues_Shared() {
    this->Magnitude = 0.00f;
    this->bWeaponActivate = false;
    this->bIsFatal = false;
    this->bIsCritical = false;
    this->bIsShield = false;
    this->bIsShieldDestroyed = false;
    this->bIsShieldApplied = false;
    this->bIsBallistic = false;
    this->NonPlayerMagnitude = 0.00f;
    this->NonPlayerbIsFatal = false;
    this->NonPlayerbIsCritical = false;
    this->bIsValid = false;
}

