#pragma once
#include "CoreMinimal.h"
#include "EPvPGameEndReasons.generated.h"

UENUM(BlueprintType)
enum EPvPGameEndReasons {
    PVPGER_TeamScoreLimit,
    PVPGER_LastManStanding,
    PVPGER_TimeExpired,
    PVPGER_MissionCompletion,
    PVPGER_MAX UMETA(Hidden),
};

