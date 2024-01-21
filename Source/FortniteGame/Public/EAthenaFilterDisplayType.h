#pragma once
#include "CoreMinimal.h"
#include "EAthenaFilterDisplayType.generated.h"

UENUM(BlueprintType)
enum class EAthenaFilterDisplayType : uint8 {
    UseCategoryName,
    ShowFilterString,
};

