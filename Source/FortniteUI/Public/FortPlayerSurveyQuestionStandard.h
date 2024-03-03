#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyQuestionBase.h"
#include "FortPlayerSurveyQuestionStandard.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyQuestionStandard : public FFortPlayerSurveyQuestionBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FFortPlayerSurveyQuestionStandard();
};

