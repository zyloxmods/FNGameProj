#pragma once
#include "CoreMinimal.h"
#include "EBuildingHighlightType.generated.h"

UENUM(BlueprintType)
namespace EBuildingHighlightType {
    enum Type {
        Primary,
        Interact,
        WillBeDestroyed,
        Quest,
        MAX_None,
    };
}

