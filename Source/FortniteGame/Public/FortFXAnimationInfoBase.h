#pragma once
#include "CoreMinimal.h"
#include "FortFXAnimationInfoBase.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFortFXAnimationInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* LerpCurve;
    
    FORTNITEGAME_API FFortFXAnimationInfoBase();
};

