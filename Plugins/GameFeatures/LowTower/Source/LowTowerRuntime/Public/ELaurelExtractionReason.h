#pragma once
#include "CoreMinimal.h"
#include "ELaurelExtractionReason.generated.h"

UENUM(BlueprintType)
enum class ELaurelExtractionReason : uint8 {
    Death,
    HardyExtraction,
    Unknown,
};

