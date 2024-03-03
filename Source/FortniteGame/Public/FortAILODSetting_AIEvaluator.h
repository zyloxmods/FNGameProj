#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaAILODSetting.h"
#include "FortAILODSetting_AIEvaluator.generated.h"

USTRUCT(BlueprintType)
struct FFortAILODSetting_AIEvaluator : public FFortAthenaAILODSetting {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IntervalMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RandomDeviationMultiplier;
    
public:
    FORTNITEGAME_API FFortAILODSetting_AIEvaluator();
};

