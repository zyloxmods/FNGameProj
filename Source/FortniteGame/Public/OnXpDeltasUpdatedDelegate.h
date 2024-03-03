#pragma once
#include "CoreMinimal.h"
#include "OnXpDeltasUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnXpDeltasUpdated, int32, CombatXp, int32, ServivalXp, int32, MedalBonusXP, int32, ChallengeXp, int32, MatchXp, int32, TotalXp);

