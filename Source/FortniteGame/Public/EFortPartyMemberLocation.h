#pragma once
#include "CoreMinimal.h"
#include "EFortPartyMemberLocation.generated.h"

UENUM(BlueprintType)
enum class EFortPartyMemberLocation : uint8 {
    PreLobby,
    ConnectingToLobby,
    Lobby,
    JoiningGame,
    ProcessingRejoin,
    InGame,
    Spectating,
    WatchingReplay,
    ReturningToFrontEnd,
};

