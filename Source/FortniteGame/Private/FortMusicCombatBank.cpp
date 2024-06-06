#include "FortMusicCombatBank.h"

UFortMusicAsset* UFortMusicCombatBank::GetAssetFromCombatIntensity(TEnumAsByte<EFortMusicCombatIntensity::Type> Intensity) const {
    return NULL;
}

UFortMusicCombatBank::UFortMusicCombatBank() {
    Assets[0] = NULL;
    Assets[1] = NULL;
    Assets[2] = NULL;
    Assets[3] = NULL;
}

