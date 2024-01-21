#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnswerContainerChangeEventInfo.h"
#include "FortPlayerSurveyAnswerContainerChangeDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFortPlayerSurveyAnswerContainerChangeDelegate, UObject*, Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo&, EventInfo);

