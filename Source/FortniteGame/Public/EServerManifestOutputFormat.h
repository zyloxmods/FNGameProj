#pragma once
#include "CoreMinimal.h"
#include "EServerManifestOutputFormat.generated.h"

UENUM(BlueprintType)
enum class EServerManifestOutputFormat : uint8 {
    FlatFile,
    Json,
    HTTP,
};

