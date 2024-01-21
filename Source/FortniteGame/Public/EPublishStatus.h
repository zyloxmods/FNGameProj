#pragma once
#include "CoreMinimal.h"
#include "EPublishStatus.generated.h"

UENUM(BlueprintType)
enum class EPublishStatus : uint8 {
    Banned,
    CannotPublish,
    NeedsCreatorName,
    CanPublishProvisionally,
    CanPublish,
};

