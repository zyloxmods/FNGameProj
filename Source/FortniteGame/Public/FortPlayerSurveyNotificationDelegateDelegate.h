#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyNotificationDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFortPlayerSurveyNotificationDelegate, UObject*, Source);

