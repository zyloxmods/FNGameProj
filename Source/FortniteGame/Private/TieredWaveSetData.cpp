#include "TieredWaveSetData.h"

FTieredWaveSetData::FTieredWaveSetData() {
    this->EDOIdx = 0;
    this->BreatherBetweenWaves = 1;
    this->WaveRules = EWaveRules::KillAllEnemies;
    this->WaveLengthMod = 1;
    this->NumKillsMod = 1;
    this->KillPointsMod = 1;
    this->DifficultyAddMod = 1;
    this->bDeferTemporaryModifiers = false;
}

