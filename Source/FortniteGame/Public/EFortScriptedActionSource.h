#pragma once
#include "CoreMinimal.h"
#include "EFortScriptedActionSource.generated.h"

UENUM(BlueprintType)
enum class EFortScriptedActionSource : uint8 {
    Quest,
    Token,
    Manual,
    Max_None,
};

