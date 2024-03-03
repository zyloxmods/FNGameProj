#pragma once
#include "CoreMinimal.h"
#include "EFortCurieApplicationEvent.generated.h"

UENUM(BlueprintType)
enum class EFortCurieApplicationEvent : uint8 {
    OnHit,
    OnBeginOverlap,
    OnEndOverlap,
    MaxValue,
};

