#include "AthenaMusicPackItemDefinition.h"

TSoftObjectPtr<UTexture2D> UAthenaMusicPackItemDefinition::GetCoverArt() const {
    return NULL;
}

UAthenaMusicPackItemDefinition::UAthenaMusicPackItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bIsDefaultMusicPack = false;
    MusicPreviewStartTime = 1;
}

