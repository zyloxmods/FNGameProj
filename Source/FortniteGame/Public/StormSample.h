#pragma once
#include "CoreMinimal.h"
#include "BaseSample.h"
#include "StormSample.generated.h"

USTRUCT(BlueprintType)
struct FStormSample : public FBaseSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    FORTNITEGAME_API FStormSample();
};

