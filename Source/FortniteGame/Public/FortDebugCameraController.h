#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "FortDebugCameraController.generated.h"

UCLASS(Blueprintable)
class AFortDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    AFortDebugCameraController();
};

