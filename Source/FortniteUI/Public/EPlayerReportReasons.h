#pragma once
#include "CoreMinimal.h"
#include "EPlayerReportReasons.generated.h"

UENUM(BlueprintType)
enum class EPlayerReportReasons : uint8 {
    None,
    Communication,
    Offensive,
    AFK,
    IgnoringObjective,
    Harassment,
    Exploiting,
    TradeScam,
    CommunicationsAbuse,
    OffensiveName,
    TeamingUpWithEnemies,
    InappropriateContent,
    ExploitingOrHacking,
};

