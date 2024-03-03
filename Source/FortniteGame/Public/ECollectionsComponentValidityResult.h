#pragma once
#include "CoreMinimal.h"
#include "ECollectionsComponentValidityResult.generated.h"

UENUM(BlueprintType)
enum class ECollectionsComponentValidityResult : uint8 {
    IsValid,
    IsNotValid,
};

