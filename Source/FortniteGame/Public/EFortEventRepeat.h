#pragma once
#include "CoreMinimal.h"
#include "EFortEventRepeat.generated.h"

UENUM(BlueprintType)
namespace EFortEventRepeat {
    enum Type {
        EFER_Inactive,
        EFER_Always,
        EFER_OncePerPlayer,
        EFER_OncePerCampaign,
        EFER_OncePerMap,
        EFER_MAX UMETA(Hidden),
    };
}

