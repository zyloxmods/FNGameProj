#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKReturnCode.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKReturnCode : uint8 {
    Success,
    SuccessIpcOldSdk,
    SuccessIpcOldGfe,
    Error,
    ErrorGfeVersion,
    ErrorSdkVersion,
    ErrorModuleNotLoaded,
};

