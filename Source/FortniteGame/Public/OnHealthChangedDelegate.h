#pragma once
#include "CoreMinimal.h"
#include "OnHealthChangedDelegate.generated.h"

class AFortTeamHealthInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, AFortTeamHealthInfo*, TeamHealthInfo);

