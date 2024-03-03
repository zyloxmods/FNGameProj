#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponReduceMeshWorkSetting.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponReduceMeshWorkSetting : uint8 {
    DisableTick,
    DontReduceWork,
    HandledInAnimInstance,
};

