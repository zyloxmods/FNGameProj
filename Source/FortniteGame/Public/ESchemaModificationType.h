#pragma once
#include "CoreMinimal.h"
#include "ESchemaModificationType.generated.h"

UENUM(BlueprintType)
enum class ESchemaModificationType : uint8 {
    AddOrModify,
    Remove,
    Count,
};

