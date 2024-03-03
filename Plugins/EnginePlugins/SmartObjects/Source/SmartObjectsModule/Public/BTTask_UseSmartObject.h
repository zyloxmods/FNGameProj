#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_UseSmartObject.generated.h"

UCLASS(Blueprintable)
class SMARTOBJECTSMODULE_API UBTTask_UseSmartObject : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_UseSmartObject();
};

