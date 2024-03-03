#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerPartySuggestionAcceptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyPlayerPartySuggestionAccept, int32, PlayerIndex);

