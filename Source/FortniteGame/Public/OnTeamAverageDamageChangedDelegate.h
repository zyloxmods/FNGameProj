#pragma once
#include "CoreMinimal.h"
#include "OnTeamAverageDamageChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamAverageDamageChanged, float, NewAverageDamage);

