#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSwipeDetector.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEUI_API FFortSwipeDetector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SwipeThreshold;
    
    FFortSwipeDetector();
};

