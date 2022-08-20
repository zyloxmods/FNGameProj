#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFeedbackBroadcastFilter : uint8 
{
	FFBF_SpeakerTeam,
	FFBF_SpeakerAdressee,
	FFBF_HumanPvP_Team1,
	FFBF_HumanPvP_Team2,
	FFBF_None_Max,
	FFBF_MAX,
};
