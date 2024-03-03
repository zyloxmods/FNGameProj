#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterpolatedTransitionCamera.generated.h"

USTRUCT(BlueprintType)
struct FInterpolatedTransitionCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldOfView;
    
    FORTNITEUI_API FInterpolatedTransitionCamera();
};

