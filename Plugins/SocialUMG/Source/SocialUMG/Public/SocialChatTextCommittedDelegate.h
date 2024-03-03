#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "SocialChatTextCommittedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSocialChatTextCommitted, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);

