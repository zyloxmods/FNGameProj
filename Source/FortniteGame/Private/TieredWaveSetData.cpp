#include "TieredWaveSetData.h"

FTieredWaveSetData::FTieredWaveSetData() {
    EDOIdx = 0;
    BreatherBetweenWaves = 1;
    WaveRules = EWaveRules::KillAllEnemies;
    WaveLengthMod = 1;
    NumKillsMod = 1;
    KillPointsMod = 1;
    DifficultyAddMod = 1;
    bDeferTemporaryModifiers = false;
}

