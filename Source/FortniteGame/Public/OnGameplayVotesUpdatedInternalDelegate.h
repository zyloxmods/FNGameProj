#pragma once
#include "CoreMinimal.h"
#include "EFortVoteStatus.h"
#include "EFortVoteType.h"
#include "Voter.h"
#include "OnGameplayVotesUpdatedInternalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnGameplayVotesUpdatedInternal, EFortVoteType, VoteType, EFortVoteStatus, VoteStatus, int32, VoteResult, const TArray<FVoter>&, Voters);

