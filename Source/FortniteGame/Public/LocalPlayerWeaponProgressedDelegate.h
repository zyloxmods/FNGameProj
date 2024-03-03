#pragma once
#include "CoreMinimal.h"
#include "LocalPlayerWeaponProgressedDelegate.generated.h"

class UFortWeaponItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocalPlayerWeaponProgressed, UFortWeaponItemDefinition*, NextWeapon);

