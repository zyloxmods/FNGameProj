#pragma once
#include "CoreMinimal.h"
#include "EPlayerBanReasons.generated.h"

UENUM(BlueprintType)
enum class EPlayerBanReasons : uint8 {
    Teaming,
    Afk_Leeching,
    Harassment,
    TradeScamming,
    Exploiting,
    Competitive,
    Creative,
    TeamingWithCheater,
};

