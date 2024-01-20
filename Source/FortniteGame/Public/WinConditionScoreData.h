#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AthenaScoreData.h"
#include "WinConditionScoreData.generated.h"

USTRUCT(BlueprintType)
struct FWinConditionScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GoalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BigScoreThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaScoreData> ScoreDataList;
    
    FORTNITEGAME_API FWinConditionScoreData();
};

