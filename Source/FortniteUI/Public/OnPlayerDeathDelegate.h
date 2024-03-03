#pragma once
#include "CoreMinimal.h"
#include "FortPlayerDeathReport.h"
#include "OnPlayerDeathDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDeath, const FFortPlayerDeathReport&, DeathReport);

