#pragma once
#include "CoreMinimal.h"
#include "ESubgameLoadFromCMS.generated.h"

UENUM(BlueprintType)
enum class ESubgameLoadFromCMS : uint8 {
    DoNotLoadFromCMS,
    LoadImageFromCMS,
};

