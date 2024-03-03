#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EVoteSessionState.h"
#include "OnVoteSessionVotingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVoteSessionVoting, const FGameplayTag&, VoteSessionId, const FGameplayTag&, StartingVoteId, EVoteSessionState, SessionState);

