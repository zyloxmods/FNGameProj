#pragma once
#include "CoreMinimal.h"
#include "FortHUDTagPromptData.h"
#include "GameplayTagContainer.h"
#include "OnRequestPromptDisplayDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestPromptDisplayDelegate, const FFortHUDTagPromptData&, PromptData, const FGameplayTag&, Tag);

