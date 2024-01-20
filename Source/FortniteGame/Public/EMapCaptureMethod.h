#pragma once
#include "CoreMinimal.h"
#include "EMapCaptureMethod.generated.h"

UENUM()
enum class EMapCaptureMethod : int32 {
    None,
    LiveCapture,
    StaticCapture,
};

