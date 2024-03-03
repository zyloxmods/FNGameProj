#include "FortAIBatchedDamageCues.h"

FFortAIBatchedDamageCues::FFortAIBatchedDamageCues() {
    this->bImpact = false;
    this->bImpactWeapon = false;
    this->bDamage = false;
    this->bDamageShields = false;
    this->bDamageWeapon = false;
    this->bFatal = false;
    this->bWeaponActivated = false;
    this->TargetActor = NULL;
}

