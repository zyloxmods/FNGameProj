#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortQuestType : uint8 
{
	Optional,
	DailyQuest,
	TransientQuest,
	SurvivorQuest,
	Achievement,
	Onboarding,
	StreamBroadcaster,
	StreamViewer,
	StreamSubscriber,
	Athena,
	AthenaDailyQuest,
	AthenaEvent,
	AthenaChallengeBundleQuest,
	AthenaTransientQuest,
	All,
	EFortQuestType_MAX,
};
