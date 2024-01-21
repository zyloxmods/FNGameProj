#pragma once
#include "CoreMinimal.h"
#include "EDespawnAIType.generated.h"

UENUM(BlueprintType)
enum class EDespawnAIType : uint8 {
    Relevancy,
    Distance,
};

