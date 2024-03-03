#pragma once
#include "CoreMinimal.h"
#include "EFortAthenaTutorialScreenExtraWidget.generated.h"

UENUM(BlueprintType)
enum class EFortAthenaTutorialScreenExtraWidget : uint8 {
    None,
    DragToTurn,
    Completed,
    Count,
};

