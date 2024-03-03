#pragma once
#include "CoreMinimal.h"
#include "OnCreativeQuickBarRequestSubItemsReceivedDelegate.generated.h"

class UFortPlaysetPropItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeQuickBarRequestSubItemsReceived, const TArray<UFortPlaysetPropItemDefinition*>&, PlaysetPropItems);

