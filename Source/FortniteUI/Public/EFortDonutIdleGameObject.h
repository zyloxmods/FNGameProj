#pragma once
#include "CoreMinimal.h"
#include "EFortDonutIdleGameObject.generated.h"

UENUM(BlueprintType)
enum class EFortDonutIdleGameObject : uint8{
    UnsetObject,
    Tree,
    Mound,
    SmallMound,
    JumpPad,
    Torch,
    PeelMonster,
    Chimichanga,
    Arm,
};

