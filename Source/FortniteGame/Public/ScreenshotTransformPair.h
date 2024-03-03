#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScreenshotTransformPair.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotTransformPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Right;
    
    FORTNITEGAME_API FScreenshotTransformPair();
};

