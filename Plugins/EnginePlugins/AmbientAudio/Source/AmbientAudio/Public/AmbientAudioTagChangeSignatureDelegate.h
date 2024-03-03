#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAmbientAudioTagActionType.h"
#include "AmbientAudioTagChangeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmbientAudioTagChangeSignature, const FGameplayTag&, GameplayTag, EAmbientAudioTagActionType, ActionType);

