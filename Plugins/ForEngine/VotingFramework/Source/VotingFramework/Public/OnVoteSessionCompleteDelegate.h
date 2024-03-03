#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnVoteSessionCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVoteSessionComplete, const FGameplayTag&, VoteSessionId);

