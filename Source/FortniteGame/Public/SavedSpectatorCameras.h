#pragma once
#include "CoreMinimal.h"
#include "SavedSpectatorCameraShot.h"
#include "SavedSpectatorCameras.generated.h"

USTRUCT(BlueprintType)
struct FSavedSpectatorCameras {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedSpectatorCameraShot> Shots;
    
    FORTNITEGAME_API FSavedSpectatorCameras();
};

