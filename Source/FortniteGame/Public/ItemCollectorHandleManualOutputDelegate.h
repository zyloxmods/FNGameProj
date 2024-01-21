#pragma once
#include "CoreMinimal.h"
#include "ItemCollectorHandleManualOutputDelegate.generated.h"

class AFortPlayerController;
class UFortWorldItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemCollectorHandleManualOutput, AFortPlayerController*, InteractingController, UFortWorldItemDefinition*, InputItem);

