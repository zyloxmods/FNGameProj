#pragma once
#include "CoreMinimal.h"
#include "EInputPriority.generated.h"

UENUM(BlueprintType)
enum class EInputPriority : uint8 {
    Normal,
    Menu,
    Chat,
    Modal,
    Confirmation,
    Error,
    HUD,
};

