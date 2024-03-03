#pragma once
#include "CoreMinimal.h"
#include "TitaniumPlayerCompOnPlayerEarnedEliminationDelegate.generated.h"

class UFortWorldItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTitaniumPlayerCompOnPlayerEarnedElimination, const UFortWorldItemDefinition*, UpgradedWeapon);

