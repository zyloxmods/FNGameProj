#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlaylistReadyAsyncDelegateDelegate.generated.h"

class AFortGameStateAthena;
class UFortPlaylist;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlaylistReadyAsyncDelegate, AFortGameStateAthena*, GameState, const UFortPlaylist*, Playlist, const FGameplayTagContainer&, PlaylistContextTags);

