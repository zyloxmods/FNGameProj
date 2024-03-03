#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyItemChangedDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFortPlayerSurveyItemChangedDelegate, UObject*, Source, int32, Index);

