#pragma once
#include "CoreMinimal.h"
#include "EServerManifestCommandType.generated.h"

UENUM(BlueprintType)
enum class EServerManifestCommandType : uint8 {
    Move,
    Copy,
    Unknown,
};

