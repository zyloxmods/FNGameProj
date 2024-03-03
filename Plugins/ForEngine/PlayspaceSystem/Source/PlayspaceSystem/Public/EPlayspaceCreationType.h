#pragma once
#include "CoreMinimal.h"
#include "EPlayspaceCreationType.generated.h"

UENUM(BlueprintType)
enum class EPlayspaceCreationType : uint8 {
    ChildOfRoot,
    RootDestroy,
    RootInserted,
};

