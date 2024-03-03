#pragma once
#include "CoreMinimal.h"
#include "EKairosHeroAnimationType.generated.h"

UENUM(BlueprintType)
enum class EKairosHeroAnimationType : uint8 {
    Unknown,
    Idle,
    Emote,
};

