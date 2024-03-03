#pragma once
#include "CoreMinimal.h"
#include "EFortQuestMapNodeType.generated.h"

UENUM(BlueprintType)
enum class EFortQuestMapNodeType : uint8 {
    MandatoryQuest,
    SideQuest,
};

