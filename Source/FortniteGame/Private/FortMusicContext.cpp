#include "FortMusicContext.h"

void UFortMusicContext::SetActiveMusicPack(const UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset) {
}

bool UFortMusicContext::IsDefaultMusicEquipped() {
    return false;
}

UAthenaMusicPackItemDefinition* UFortMusicContext::GetEquippedMusicPack() {
    return NULL;
}

UFortMusicContext::UFortMusicContext() {
    DesiredActiveMusicPack = NULL;
}

