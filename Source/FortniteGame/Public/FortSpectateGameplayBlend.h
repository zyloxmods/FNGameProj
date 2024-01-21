#pragma once
#include "CoreMinimal.h"
#include "FortSpectateBlend.h"
#include "FortSpectateGameplayBlend.generated.h"

class AFortPlayerCameraSpectator;

UCLASS(Blueprintable)
class UFortSpectateGameplayBlend : public UFortSpectateBlend {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerCameraSpectator* CameraManager;
    
public:
    UFortSpectateGameplayBlend();
};

