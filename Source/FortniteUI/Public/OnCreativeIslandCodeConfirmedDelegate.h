#pragma once
#include "CoreMinimal.h"
#include "OnCreativeIslandCodeConfirmedDelegate.generated.h"

class UFortCreativeIslandLink;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeIslandCodeConfirmed, const UFortCreativeIslandLink*, IslandLink);

