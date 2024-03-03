#pragma once
#include "CoreMinimal.h"
#include "OnCreativeLinkDataErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeLinkDataError, const FString&, ErrorCode);

