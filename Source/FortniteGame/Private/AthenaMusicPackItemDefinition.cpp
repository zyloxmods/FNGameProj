#include "AthenaMusicPackItemDefinition.h"

TSoftObjectPtr<UTexture2D> UAthenaMusicPackItemDefinition::GetCoverArt() const {
    return NULL;
}

UAthenaMusicPackItemDefinition::UAthenaMusicPackItemDefinition() {
    this->bIsDefaultMusicPack = false;
    this->MusicPreviewStartTime = 1;
}

