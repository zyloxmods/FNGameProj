#pragma once
#include "CoreMinimal.h"
#include "EAmbientAudioEntryActionType.h"
#include "AmbientAudioEntryChangeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmbientAudioEntryChangeSignature, FName, AmbientName, EAmbientAudioEntryActionType, ActionType);

