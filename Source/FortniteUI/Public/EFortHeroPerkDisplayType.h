#pragma once
#include "CoreMinimal.h"
#include "EFortHeroPerkDisplayType.generated.h"

UENUM(BlueprintType)
enum class EFortHeroPerkDisplayType : uint8 {
    CommanderPerk,
    TeamPerk,
    ClassPerk,
    StandardPerk,
    Max_None,
};

