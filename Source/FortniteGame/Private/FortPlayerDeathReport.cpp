#include "FortPlayerDeathReport.h"

FFortPlayerDeathReport::FFortPlayerDeathReport() {
    ServerTimeForRespawn = 1;
    ServerTimeForResurrect = 1;
    LethalDamage = 1;
    KillerPlayerState = NULL;
    KillerPawn = NULL;
    KillerHealthPercent = 1;
    KillerShieldPercent = 1;
    KillerWeapon = NULL;
    DamageCauser = NULL;
    bDroppedBackpack = false;
    bNotifyUI = false;
}

