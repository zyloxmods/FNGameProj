#include "FortSpawnActorComponent.h"

void UFortSpawnActorComponent::OnPlaylistDataLoaded(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags) {
}

UFortSpawnActorComponent::UFortSpawnActorComponent() {
    ActorToSpawnClass = NULL;
    bAttachSpawnedActorToOwner = true;
}

