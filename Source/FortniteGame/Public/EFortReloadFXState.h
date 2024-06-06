#pragma once
#include "CoreMinimal.h"
#include "EFortReloadFXState.generated.h"

UENUM(BlueprintType)
enum class EFortReloadFXState : uint8{
        ReloadStart,
        ReloadCartridge,
        ReloadEnd,
        Max_None UMETA(Hidden),
    };


