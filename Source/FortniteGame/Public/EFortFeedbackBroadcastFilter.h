#pragma once
#include "CoreMinimal.h"
#include "EFortFeedbackBroadcastFilter.generated.h"

UENUM(BlueprintType)
enum EFortFeedbackBroadcastFilter {
    FFBF_Speaker,
    FFBF_SpeakerTeam,
    FFBF_SpeakerAdressee,
    FFBF_HumanPvP_Team1,
    FFBF_HumanPvP_Team2,
    FFBF_None_Max,
    FFBF_MAX UMETA(Hidden),
};

