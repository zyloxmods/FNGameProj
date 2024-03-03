#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayPhase.generated.h"

USTRUCT(BlueprintType)
struct FTimeOfDayPhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FORTNITEGAME_API FTimeOfDayPhase();
};

