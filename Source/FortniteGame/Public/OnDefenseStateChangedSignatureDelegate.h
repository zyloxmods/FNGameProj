#pragma once
#include "CoreMinimal.h"
#include "EKeepDefenseState.h"
#include "OnDefenseStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDefenseStateChangedSignature, TEnumAsByte<EKeepDefenseState::Type>, NewDefenseState);

