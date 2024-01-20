#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "OnHordeTierInitializedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHordeTierInitializedDelegate, const TArray<FFortItemInstanceQuantityPair>&, Items);

