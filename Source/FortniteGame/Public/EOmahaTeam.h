#pragma once
#include "CoreMinimal.h"
#include "EOmahaTeam.generated.h"

UENUM(BlueprintType)
enum class EOmahaTeam : uint8 {
    Home,
    Away,
    MAX,
};

