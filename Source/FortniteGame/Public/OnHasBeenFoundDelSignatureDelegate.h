#pragma once
#include "CoreMinimal.h"
#include "OnHasBeenFoundDelSignatureDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHasBeenFoundDelSignature, AFortPlayerController*, PlayerController);

