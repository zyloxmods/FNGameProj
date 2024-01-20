#pragma once
#include "CoreMinimal.h"
#include "EFortWorldMarkerType.generated.h"

UENUM(BlueprintType)
enum class EFortWorldMarkerType : uint8 {
    None,
    Location,
    Enemy,
    Item,
    SpecialLocal,
    MAX,
};

