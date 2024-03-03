#pragma once
#include "CoreMinimal.h"
#include "ENewsExternalURLMode.generated.h"

UENUM(BlueprintType)
enum class ENewsExternalURLMode : uint8 {
    PatchNotes,
    UpdateNotes,
    MoreInformation,
};

