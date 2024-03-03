#include "FortQueryGenerator_Enemies.h"

UFortQueryGenerator_Enemies::UFortQueryGenerator_Enemies() {
    this->bPerceivedEnemiesOnly = false;
    this->bSleepCapableAIUsePerceivedEnemiesOnly = true;
    this->bIgnoreDBNOPawns = true;
    this->bIgnoreSleepingAIs = false;
    this->bAddEnemiesFromAbilityRange = false;
}

