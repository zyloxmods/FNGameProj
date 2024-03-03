#pragma once
#include "CoreMinimal.h"
#include "ETireSurfaces.generated.h"

UENUM(BlueprintType)
enum class ETireSurfaces : uint8 {
    Road,
    Dirt,
    Grass,
    Air,
    Water,
};

