#pragma once
#include "CoreMinimal.h"
#include "FortCameraMode_ThirdPerson.h"
#include "FortCameraMode_RespawnedAir.generated.h"

UCLASS(Blueprintable)
class UFortCameraMode_RespawnedAir : public UFortCameraMode_ThirdPerson {
    GENERATED_BODY()
public:
    UFortCameraMode_RespawnedAir();
};

