#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "OnVoteCastedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnVoteCasted, const FUniqueNetIdRepl&, UserNetId, const FGameplayTag&, VoteSessionId, const FGameplayTag&, VoteId, const FGameplayTag&, VoteSelectionId);

