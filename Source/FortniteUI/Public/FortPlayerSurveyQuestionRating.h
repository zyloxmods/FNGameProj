#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyQuestionBase.h"
#include "FortPlayerSurveyQuestionRating.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyQuestionRating : public FFortPlayerSurveyQuestionBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FFortPlayerSurveyQuestionRating();
};

