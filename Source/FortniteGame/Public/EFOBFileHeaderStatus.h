#pragma once
#include "CoreMinimal.h"
#include "EFOBFileHeaderStatus.generated.h"

UENUM(BlueprintType)
enum class EFOBFileHeaderStatus : uint8 {
    NoExistingFile,
    HasExistingFile,
    UnableToDetermine,
};

