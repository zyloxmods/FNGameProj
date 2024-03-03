#pragma once
#include "CoreMinimal.h"
#include "FortItemEvolutionNavigateRequestDelegate.generated.h"

class UFortAccountItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortItemEvolutionNavigateRequest, UFortAccountItem*, Item);

