#pragma once
#include "CoreMinimal.h"
#include "EMinigamePlayerPersistence.generated.h"

UENUM(BlueprintType)
enum class EMinigamePlayerPersistence : uint8 {
    None,
    PartyLeaderOnly,
    AllPlayers,
};

