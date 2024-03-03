#pragma once
#include "CoreMinimal.h"
#include "FortCameraMode_ThirdPerson.h"
#include "FortCameraMode_FocalPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCameraMode_FocalPoint : public UFortCameraMode_ThirdPerson {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InterpolatedFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVInterpSpeed;
    
    UFortCameraMode_FocalPoint();
};

