#pragma once
#include "CoreMinimal.h"
#include "OnConversationStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConversationStatusChanged, bool, bIsInConversation);

