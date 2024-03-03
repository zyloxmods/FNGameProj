#pragma once
#include "CoreMinimal.h"
#include "DigestedTrackingOffsetModifierCurves.generated.h"

USTRUCT(BlueprintType)
struct FDigestedTrackingOffsetModifierCurves {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Values[10];
    
    FORTNITEGAME_API FDigestedTrackingOffsetModifierCurves();
};

