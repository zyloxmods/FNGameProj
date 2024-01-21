#pragma once
#include "CoreMinimal.h"
#include "EFortShowdownMatchType.generated.h"

UENUM(BlueprintType)
enum class EFortShowdownMatchType : uint8 {
    Unknown,
    Solo,
    Duos,
    Squads,
};

