#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortCameraModeOverride.generated.h"

class UFortCameraMode;

USTRUCT(BlueprintType)
struct FFortCameraModeOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> OriginalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> ClassOverride;
    
    FORTNITEGAME_API FFortCameraModeOverride();
};

