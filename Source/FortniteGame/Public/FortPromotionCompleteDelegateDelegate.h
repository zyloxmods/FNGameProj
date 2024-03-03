#pragma once
#include "CoreMinimal.h"
#include "FortPromotionCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortPromotionCompleteDelegate, const bool, bWasSuccessful);

