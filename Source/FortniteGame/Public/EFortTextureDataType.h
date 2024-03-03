#pragma once
#include "CoreMinimal.h"
#include "EFortTextureDataType.generated.h"

UENUM(BlueprintType)
namespace EFortTextureDataType {
    enum Type {
        Any,
        OuterWall,
        InnerWall,
        Corner,
        Floor,
        Ceiling,
        Trim,
        Roof,
        Pillar,
        Shingle,
        None,
    };
}

