#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "FortBTTask_BotMissionInteract.generated.h"

UCLASS(Blueprintable)
class UFortBTTask_BotMissionInteract : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UFortBTTask_BotMissionInteract();
};

