#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "FortAthenaAISpawnerDataComponent_BehaviorBase.generated.h"

class UBehaviorTree;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_BehaviorBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_BehaviorBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBehaviorTree* GetBehaviorTree();
    
};

