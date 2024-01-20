#include "TieredWaveSetData.h"

FTieredWaveSetData::FTieredWaveSetData() {
    this->EDOIdx = 0;
    this->BreatherBetweenWaves = 0.00f;
    this->WaveRules = EWaveRules::KillAllEnemies;
    this->WaveLengthMod = 0.00f;
    this->NumKillsMod = 0.00f;
    this->KillPointsMod = 0.00f;
    this->DifficultyAddMod = 0.00f;
    this->bDeferTemporaryModifiers = false;
}

