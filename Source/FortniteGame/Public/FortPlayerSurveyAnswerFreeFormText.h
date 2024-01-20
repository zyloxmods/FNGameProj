#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerBase.h"
#include "FortPlayerSurveyAnswerFreeFormText.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnswerFreeFormText : public FFortPlayerSurveyAnswerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnswerText;
    
    FORTNITEGAME_API FFortPlayerSurveyAnswerFreeFormText();
};

