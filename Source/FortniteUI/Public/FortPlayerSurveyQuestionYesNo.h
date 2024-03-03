#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyQuestionBase.h"
#include "FortPlayerSurveyQuestionYesNo.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyQuestionYesNo : public FFortPlayerSurveyQuestionBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FFortPlayerSurveyQuestionYesNo();
};

