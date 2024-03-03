#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagNotifyDelegateDelegate.generated.h"

class UAnimSequenceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameplayTagNotifyDelegate, UAnimSequenceBase*, Animation, FGameplayTag, NotifyTag);

