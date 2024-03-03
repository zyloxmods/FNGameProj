#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "FortBTTask_TakerMoveToNavmesh.generated.h"

UCLASS(Blueprintable)
class UFortBTTask_TakerMoveToNavmesh : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UFortBTTask_TakerMoveToNavmesh();
};

