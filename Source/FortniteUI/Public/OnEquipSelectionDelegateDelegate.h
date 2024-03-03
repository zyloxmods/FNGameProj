#pragma once
#include "CoreMinimal.h"
#include "FortItemEntry.h"
#include "OnEquipSelectionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipSelectionDelegate, const FFortItemEntry&, ItemEntry);

