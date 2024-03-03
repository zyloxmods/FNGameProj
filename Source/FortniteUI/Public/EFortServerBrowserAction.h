#pragma once
#include "CoreMinimal.h"
#include "EFortServerBrowserAction.generated.h"

UENUM(BlueprintType)
enum class EFortServerBrowserAction : uint8 {
    BattleLabServerCreate,
    PlaygroundServerCreate,
    CreativeServerCreate,
    Play,
};

