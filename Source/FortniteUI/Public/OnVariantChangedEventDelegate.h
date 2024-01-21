#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnVariantChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVariantChangedEvent, FGameplayTag, VariantChannel, FGameplayTag, VariantTag, bool, IsOwned);

