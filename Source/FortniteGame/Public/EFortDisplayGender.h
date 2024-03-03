#pragma once
#include "CoreMinimal.h"
#include "EFortDisplayGender.generated.h"

UENUM(BlueprintType)
namespace EFortDisplayGender {
    enum Type {
        Unknown,
        Male,
        Female,
        NumTypes,
    };
}

