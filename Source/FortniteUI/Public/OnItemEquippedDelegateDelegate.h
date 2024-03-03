#pragma once
#include "CoreMinimal.h"
#include "FortItemEntry.h"
#include "OnItemEquippedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemEquippedDelegate, const FFortItemEntry&, ItemEquipped);

