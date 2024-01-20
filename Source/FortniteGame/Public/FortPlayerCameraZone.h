#pragma once
#include "CoreMinimal.h"
#include "FortPlayerCameraBase.h"
#include "FortPlayerCameraZone.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortPlayerCameraZone : public AFortPlayerCameraBase {
    GENERATED_BODY()
public:
    AFortPlayerCameraZone();
};

