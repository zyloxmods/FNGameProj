#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "StormCameraModifier.generated.h"

UCLASS(Abstract, Blueprintable)
class UStormCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UStormCameraModifier();
};

