#pragma once
#include "CoreMinimal.h"
#include "EFortGameplayCueAttachType.generated.h"

UENUM(BlueprintType)
enum class EFortGameplayCueAttachType : uint8 {
    AttachToTarget,
    DoNotAttach,
};

