#pragma once
#include "CoreMinimal.h"
#include "SocialChatTextChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSocialChatTextChanged, const FText&, Text);

