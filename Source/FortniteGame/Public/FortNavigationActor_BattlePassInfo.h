#pragma once
#include "CoreMinimal.h"
#include "FortEventLevelNavigationActor.h"
#include "FortNavigationActor_BattlePassInfo.generated.h"

class UFortItemDefinition;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortNavigationActor_BattlePassInfo : public AFortEventLevelNavigationActor {
    GENERATED_BODY()
public:
    AFortNavigationActor_BattlePassInfo();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitForBattlePassInfo(int32 CurrentLevel, int32 CurrentXp, int32 XpToLevel, const UFortItemDefinition* NextReward);
    
};

