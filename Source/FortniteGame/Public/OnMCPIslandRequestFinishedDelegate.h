#pragma once
#include "CoreMinimal.h"
#include "OnMCPIslandRequestFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMCPIslandRequestFinished, bool, bSuccess, const FText&, Reason);

