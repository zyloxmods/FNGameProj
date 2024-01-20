#include "FortMusicCombatBank.h"

UFortMusicAsset* UFortMusicCombatBank::GetAssetFromCombatIntensity(TEnumAsByte<EFortMusicCombatIntensity::Type> Intensity) const {
    return NULL;
}

UFortMusicCombatBank::UFortMusicCombatBank() {
    this->Assets[0] = NULL;
    this->Assets[1] = NULL;
    this->Assets[2] = NULL;
    this->Assets[3] = NULL;
}

