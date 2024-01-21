#pragma once
#include "CoreMinimal.h"
#include "OnChosenSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChosenSignature, int32, ChosenIndex, int32, MenuIdentifier);

