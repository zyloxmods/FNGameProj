#pragma once
#include "CoreMinimal.h"
#include "OnAccoladesOpenOrClosedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAccoladesOpenOrClosed, bool, bNewlyOpened);

