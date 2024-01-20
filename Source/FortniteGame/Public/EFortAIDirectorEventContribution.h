#pragma once
#include "CoreMinimal.h"
#include "EFortAIDirectorEventContribution.generated.h"

UENUM(BlueprintType)
enum class EFortAIDirectorEventContribution : uint8 {
    Increment,
    Set,
};

