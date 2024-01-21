#pragma once
#include "CoreMinimal.h"
#include "EFortUISurvivorSquadMatchType.generated.h"

UENUM(BlueprintType)
enum class EFortUISurvivorSquadMatchType : uint8 {
    Multi,
    Single,
    Summary,
    Max_None,
};

