#pragma once
#include "CoreMinimal.h"
#include "ELinkAcrossSimpleAction.generated.h"

UENUM(BlueprintType)
enum class ELinkAcrossSimpleAction : uint8 {
    AddToAll,
    RemovedFromAll,
    Nothing,
};

