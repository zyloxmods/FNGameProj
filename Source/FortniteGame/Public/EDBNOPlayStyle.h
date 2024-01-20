#pragma once
#include "CoreMinimal.h"
#include "EDBNOPlayStyle.generated.h"

UENUM(BlueprintType)
enum class EDBNOPlayStyle : uint8 {
    Thirsty,
    Default,
    Passive,
    ThristyButPassiveOnPlayers,
    DefaultButPassiveOnPlayers,
};

