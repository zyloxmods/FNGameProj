#pragma once
#include "CoreMinimal.h"
#include "HydrogenOnContestedChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHydrogenOnContestedChange, bool, bContested);

