#pragma once
#include "CoreMinimal.h"
#include "EFrontEndCamera.h"
#include "CameraPair.generated.h"

class AFortCameraBase;

USTRUCT(BlueprintType)
struct FCameraPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrontEndCamera Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortCameraBase* Camera;
    
    FORTNITEGAME_API FCameraPair();
};

