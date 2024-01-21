#include "FortMusicContext.h"

void UFortMusicContext::SetActiveMusicPack(const UAthenaMusicPackItemDefinition* NewMusicPack) {
}

UAthenaMusicPackItemDefinition* UFortMusicContext::GetEquippedMusicPack() {
    return NULL;
}

UFortMusicContext::UFortMusicContext() {
    this->DesiredActiveMusicPack = NULL;
}

