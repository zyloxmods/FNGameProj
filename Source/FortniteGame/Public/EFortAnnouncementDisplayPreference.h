#pragma once
#include "CoreMinimal.h"
#include "EFortAnnouncementDisplayPreference.generated.h"

UENUM(BlueprintType)
enum class EFortAnnouncementDisplayPreference : uint8 {
    Default_HUD,
    QuestIntroduction,
    QuestJournal,
};

