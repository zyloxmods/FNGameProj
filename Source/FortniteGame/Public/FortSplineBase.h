#pragma once
#include "CoreMinimal.h"
#include "FortSplineBase.generated.h"

USTRUCT(BlueprintType)
struct FFortSplineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    FORTNITEGAME_API FFortSplineBase();
};

