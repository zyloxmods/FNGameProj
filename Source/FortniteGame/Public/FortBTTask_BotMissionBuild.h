#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "FortBTTask_BotMissionBuild.generated.h"

UCLASS(Blueprintable)
class UFortBTTask_BotMissionBuild : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UFortBTTask_BotMissionBuild();
};

