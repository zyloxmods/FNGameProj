#pragma once
#include "CoreMinimal.h"
#include "EFortUserCloudRequestType.generated.h"

UENUM(BlueprintType)
enum class EFortUserCloudRequestType : uint8 {
    LoadCloudFile,
    SaveCloudFile,
};

