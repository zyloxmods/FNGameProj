#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortCameraInstanceEntry.generated.h"

class AActor;
class UFortCameraMode;

USTRUCT(BlueprintType)
struct FFortCameraInstanceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCameraMode* Camera;
    
    FORTNITEGAME_API FFortCameraInstanceEntry();
};

