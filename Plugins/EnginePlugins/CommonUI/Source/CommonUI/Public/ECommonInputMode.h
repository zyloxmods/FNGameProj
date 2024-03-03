#pragma once
#include "CoreMinimal.h"
#include "ECommonInputMode.generated.h"

UENUM(BlueprintType)
enum class ECommonInputMode : uint8 {
    Menu,
    Game,
    All,
    MAX,
};

