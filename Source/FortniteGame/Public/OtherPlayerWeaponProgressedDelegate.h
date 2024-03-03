#pragma once
#include "CoreMinimal.h"
#include "OtherPlayerWeaponProgressedDelegate.generated.h"

class AFortPlayerStateAthena;
class UFortWeaponItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOtherPlayerWeaponProgressed, AFortPlayerStateAthena*, OtherPlayer, UFortWeaponItemDefinition*, NextWeapon);

