#pragma once
#include "CoreMinimal.h"
#include "EFortTemplateAccess.generated.h"

UENUM(BlueprintType)
enum class EFortTemplateAccess : uint8 {
    Normal,
    Trusted,
    Private,
};

