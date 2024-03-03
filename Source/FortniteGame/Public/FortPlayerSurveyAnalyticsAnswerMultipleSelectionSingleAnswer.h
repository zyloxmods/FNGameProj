#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsAnswerMultipleSelectionSingleAnswer.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsAnswerMultipleSelectionSingleAnswer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Selected;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TimeTaken;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsAnswerMultipleSelectionSingleAnswer();
};

