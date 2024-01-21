#pragma once
#include "CoreMinimal.h"
#include "FortWindIntensityAndDirection.generated.h"

USTRUCT(BlueprintType)
struct FFortWindIntensityAndDirection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindHeading;
    
public:
    FORTNITEGAME_API FFortWindIntensityAndDirection();
};

