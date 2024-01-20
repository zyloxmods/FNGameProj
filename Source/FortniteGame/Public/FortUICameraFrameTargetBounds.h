#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortUICameraFrameTargetBounds.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortUICameraFrameTargetBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderRadius;
    
    FFortUICameraFrameTargetBounds();
};

