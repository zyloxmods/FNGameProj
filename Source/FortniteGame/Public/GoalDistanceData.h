#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "GoalDistanceData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FGoalDistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreScreeningDistance;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScreeningTestMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> TestScoreCurve;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue CurveDistanceScale;
    
    FORTNITEGAME_API FGoalDistanceData();
};

