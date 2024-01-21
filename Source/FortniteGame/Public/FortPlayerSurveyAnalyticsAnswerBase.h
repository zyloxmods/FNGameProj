#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsAnswerBase.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsAnswerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TimeTaken;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsAnswerBase();
};

