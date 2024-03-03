#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ContextTutorialShowHighlightDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FContextTutorialShowHighlight, const FGameplayTagContainer&, HUDGameplayTags, bool, Show);

