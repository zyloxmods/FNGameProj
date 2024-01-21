#pragma once
#include "CoreMinimal.h"
#include "FortTouchAimAssist_Target.h"
#include "FortTouchAimAssist_TargetAggregator.generated.h"

USTRUCT(BlueprintType)
struct FFortTouchAimAssist_TargetAggregator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTouchAimAssist_Target> TargetCache0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTouchAimAssist_Target> TargetCache1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTouchAimAssist_Target AutoFireTarget;
    
public:
    FORTNITEGAME_API FFortTouchAimAssist_TargetAggregator();
};

