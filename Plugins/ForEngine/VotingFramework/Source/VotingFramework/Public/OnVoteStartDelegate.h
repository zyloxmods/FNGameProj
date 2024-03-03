#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EVoteState.h"
#include "OnVoteStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVoteStart, const FGameplayTag&, VoteSessionId, const FGameplayTag&, VoteId, EVoteState, VoteState);

