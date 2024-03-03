#pragma once
#include "CoreMinimal.h"
#include "TimerObjectiveHUDData.generated.h"

USTRUCT(BlueprintType)
struct FTimerObjectiveHUDData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
    FORTNITEGAME_API FTimerObjectiveHUDData();
};

