#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EVoteState.h"
#include "OnVoteEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnVoteEnd, const FGameplayTag&, VoteSessionId, const FGameplayTag&, VoteId, const FGameplayTag&, WinningVoteSelectionId, EVoteState, VoteState);

