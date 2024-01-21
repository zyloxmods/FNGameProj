#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerableQuestionChangeDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFortPlayerSurveyAnswerableQuestionChangeDelegate, UObject*, Source);

