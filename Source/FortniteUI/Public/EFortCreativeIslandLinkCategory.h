#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeIslandLinkCategory.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeIslandLinkCategory : uint8 {
    Default,
    Favorite,
    Published,
    Recent,
};

