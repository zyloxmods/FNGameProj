#pragma once
#include "CoreMinimal.h"
#include "ESkydivingDirection.generated.h"

UENUM(BlueprintType)
namespace ESkydivingDirection {
    enum Type {
        Center,
        Right,
        Left,
        Forward,
        Back,
    };
}

