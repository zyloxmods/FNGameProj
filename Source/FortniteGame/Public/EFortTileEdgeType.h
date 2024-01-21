#pragma once
#include "CoreMinimal.h"
#include "EFortTileEdgeType.generated.h"

UENUM(BlueprintType)
namespace EFortTileEdgeType {
    enum Type {
        Undefined,
        Outer_1,
        Transition_2,
        Inner_3,
        Border_4,
        BorderTransitionSingle_5,
        BorderTransitionDouble_6,
        MAX,
    };
}

