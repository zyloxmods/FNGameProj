#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "FortCameraModifier_DebugCameraLock.generated.h"

UCLASS(Blueprintable)
class UFortCameraModifier_DebugCameraLock : public UCameraModifier {
    GENERATED_BODY()
public:
    UFortCameraModifier_DebugCameraLock();
};

