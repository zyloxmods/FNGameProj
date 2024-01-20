#pragma once
#include "CoreMinimal.h"
#include "EFortCollectionBookPopupButtonType.generated.h"

UENUM(BlueprintType)
enum class EFortCollectionBookPopupButtonType : uint8 {
    SelectItem,
    Preview,
    Purchase,
    Unslot,
    Back,
};

