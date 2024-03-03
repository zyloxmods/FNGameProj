#include "FortPlayerDeathReport.h"

FFortPlayerDeathReport::FFortPlayerDeathReport() {
    this->ServerTimeForRespawn = 1;
    this->ServerTimeForResurrect = 1;
    this->LethalDamage = 1;
    this->KillerPlayerState = NULL;
    this->KillerPawn = NULL;
    this->KillerHealthPercent = 1;
    this->KillerShieldPercent = 1;
    this->KillerWeapon = NULL;
    this->DamageCauser = NULL;
    this->bDroppedBackpack = false;
    this->bNotifyUI = false;
}

