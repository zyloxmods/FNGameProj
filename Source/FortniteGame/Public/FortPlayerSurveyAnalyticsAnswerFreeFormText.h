#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsAnswerBase.h"
#include "FortPlayerSurveyAnalyticsAnswerFreeFormText.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsAnswerFreeFormText : public FFortPlayerSurveyAnalyticsAnswerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnswerText;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsAnswerFreeFormText();
};

