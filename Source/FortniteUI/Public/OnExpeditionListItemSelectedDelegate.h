#pragma once
#include "CoreMinimal.h"
#include "OnExpeditionListItemSelectedDelegate.generated.h"

class UFortExpeditionItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExpeditionListItemSelected, UFortExpeditionItem*, Item);

