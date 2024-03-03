#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EVoteSessionNetworkType.h"
#include "EVoteSessionState.h"
#include "OnVoteSessionSetupDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnVoteSessionSetup, const FGameplayTag&, VoteSessionId, const FGameplayTag&, StartingVoteId, const EVoteSessionNetworkType, NetworkType, EVoteSessionState, SessionState);

