#include "FortQueryGenerator_Enemies.h"

UFortQueryGenerator_Enemies::UFortQueryGenerator_Enemies() {
    bPerceivedEnemiesOnly = false;
    bSleepCapableAIUsePerceivedEnemiesOnly = true;
    bIgnoreDBNOPawns = true;
    bIgnoreSleepingAIs = false;
    bAddEnemiesFromAbilityRange = false;
}

