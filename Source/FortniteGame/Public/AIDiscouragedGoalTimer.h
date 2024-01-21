#pragma once
#include "CoreMinimal.h"
#include "FortAIGoalInfo.h"
#include "AIDiscouragedGoalTimer.generated.h"

USTRUCT(BlueprintType)
struct FAIDiscouragedGoalTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIGoalInfo DiscouragedGoalInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExpirationTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumberOfTimesMarkedForDiscouragement;
    
    FORTNITEGAME_API FAIDiscouragedGoalTimer();
};

