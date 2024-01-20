#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnHUDElementVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDElementVisibilityChanged, const FGameplayTagContainer&, HiddenHUDElementTags);

