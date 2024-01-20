#pragma once
#include "CoreMinimal.h"
#include "EFortVoteStatus.h"
#include "EFortVoteType.h"
#include "Voter.h"
#include "OnGameplayVotesUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FOnGameplayVotesUpdated, EFortVoteType, VoteType, EFortVoteStatus, VoteStatus, int32, VoteResult, const TArray<FVoter>&, Voters);

