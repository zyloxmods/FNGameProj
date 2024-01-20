#include "FortPlayerDeathReport.h"

FFortPlayerDeathReport::FFortPlayerDeathReport() {
    this->ServerTimeForRespawn = 0.00f;
    this->ServerTimeForResurrect = 0.00f;
    this->LethalDamage = 0.00f;
    this->KillerPlayerState = NULL;
    this->KillerPawn = NULL;
    this->DamageCauser = NULL;
    this->bDroppedBackpack = false;
    this->bNotifyUI = false;
}

