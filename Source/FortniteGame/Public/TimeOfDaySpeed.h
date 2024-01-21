#pragma once
#include "CoreMinimal.h"
#include "TimeOfDaySpeed.generated.h"

USTRUCT(BlueprintType)
struct FTimeOfDaySpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FORTNITEGAME_API FTimeOfDaySpeed();
};

