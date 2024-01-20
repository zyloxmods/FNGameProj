#pragma once
#include "CoreMinimal.h"
#include "EFortAIPawnGender.generated.h"

UENUM(BlueprintType)
enum class EFortAIPawnGender : uint8 {
    FAPG_Default,
    FAPG_Female,
    FAPG_Male,
    FAPG_MAX UMETA(Hidden),
};

