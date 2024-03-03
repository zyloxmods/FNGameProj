#pragma once
#include "CoreMinimal.h"
#include "EDataAssetDirectoryUpdateStatus.generated.h"

UENUM(BlueprintType)
enum class EDataAssetDirectoryUpdateStatus : uint8 {
    Failed,
    Success,
    SuccessNoChange,
};

