#pragma once
#include "CoreMinimal.h"
#include "FortChoiceUiSuccessDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortChoiceUiSuccessDelegate, int32, ChosenItem);

