#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponOverheatState.h"
#include "OnOverheatValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnOverheatValueChanged, float, CurrentValue, float, MaxValue, EFortWeaponOverheatState, State, bool, bIsInCooldown);

