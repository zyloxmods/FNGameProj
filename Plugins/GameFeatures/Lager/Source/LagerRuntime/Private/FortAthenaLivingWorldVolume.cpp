#include "FortAthenaLivingWorldVolume.h"

void AFortAthenaLivingWorldVolume::OnPointProviderRegistered(AActor* PointProvider) {
}

void AFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

AFortAthenaLivingWorldVolume::AFortAthenaLivingWorldVolume() {
    this->DeactivationTagsRange = 1;
    this->EnvironmentQuery = NULL;
    this->CachedGameState = NULL;
}

