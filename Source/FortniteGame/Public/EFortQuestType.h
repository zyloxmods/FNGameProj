#pragma once
#include "CoreMinimal.h"
#include "EFortQuestType.generated.h"

UENUM(BlueprintType)
enum class EFortQuestType : uint8 {
    Task,
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
    All,
};

