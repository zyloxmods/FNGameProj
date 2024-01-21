#pragma once
#include "CoreMinimal.h"
#include "FortConversionBeginDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortConversionBeginDelegate, const FString&, ConvertedItemInstanceId);

