#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnVoteChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnVoteChange, const FGameplayTag&, VoteSessionId, const FGameplayTag&, VoteId, const FGameplayTag&, VoteSelectionId, int32, ServerVoteTotal, int32, AllServersVoteTotal);

