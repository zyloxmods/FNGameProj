#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnVoteSessionShutdownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVoteSessionShutdown, const FGameplayTag&, VoteSessionId);

