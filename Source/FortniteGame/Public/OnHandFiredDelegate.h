#pragma once
#include "CoreMinimal.h"
#include "EDualWeaponHand.h"
#include "OnHandFiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHandFired, EDualWeaponHand, Hand, bool, bPersistantFire);

