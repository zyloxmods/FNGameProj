#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeAdColorPreset.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeAdColorPreset : uint8 {
    Default,
    Emphasized,
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
};

