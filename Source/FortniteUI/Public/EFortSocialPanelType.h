#pragma once
#include "CoreMinimal.h"
#include "EFortSocialPanelType.generated.h"

UENUM(BlueprintType)
enum class EFortSocialPanelType : uint8 {
    Join,
    Invite,
    Max,
};

