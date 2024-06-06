#include "FortMusicAsset.h"

FFortMusicSection UFortMusicAsset::GetMusicSection(TEnumAsByte<EFortMusicSectionType::Type> Section) {
    return FFortMusicSection{};
}

UFortMusicAsset::UFortMusicAsset() {
    Priority = 1;
    StopBehavior = EFortMusicSectionStopBehavior::Crossfade;
    bIsStinger = false;
}

