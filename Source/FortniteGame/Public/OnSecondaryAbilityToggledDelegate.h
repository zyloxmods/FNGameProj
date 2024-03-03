#pragma once
#include "CoreMinimal.h"
#include "OnSecondaryAbilityToggledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSecondaryAbilityToggled, bool, bSecondaryAbilityToggled);

