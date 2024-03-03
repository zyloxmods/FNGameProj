#pragma once
#include "CoreMinimal.h"
#include "EFortPartyState.generated.h"

UENUM(BlueprintType)
enum class EFortPartyState : uint8 {
    Undetermined,
    WorldView,
    TheaterView,
    Matchmaking,
    PostMatchmaking,
    ReturningToFrontEnd,
    BattleRoyaleView,
    BattleRoyalePreloading,
    BattleRoyaleMatchmaking,
    BattleRoyalePostMatchmaking,
};

