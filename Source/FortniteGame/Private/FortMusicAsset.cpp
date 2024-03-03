#include "FortMusicAsset.h"

FFortMusicSection UFortMusicAsset::GetMusicSection(TEnumAsByte<EFortMusicSectionType::Type> Section) {
    return FFortMusicSection{};
}

UFortMusicAsset::UFortMusicAsset() {
    this->Priority = 1;
    this->StopBehavior = EFortMusicSectionStopBehavior::Crossfade;
    this->bIsStinger = false;
}

