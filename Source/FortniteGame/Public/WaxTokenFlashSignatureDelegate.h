#pragma once
#include "CoreMinimal.h"
#include "WaxTokenFlashSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaxTokenFlashSignature, const TArray<int32>&, PendingFlashes);

