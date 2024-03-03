#pragma once
#include "CoreMinimal.h"
#include "SimpleQuestComponentDelegateDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleQuestComponentDelegate, AFortPlayerController*, PlayerController);

