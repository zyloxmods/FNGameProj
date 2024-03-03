#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_BehaviorBase.h"
#include "FortAthenaAISpawnerDataComponent_Behavior.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_Behavior : public UFortAthenaAISpawnerDataComponent_BehaviorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
public:
    UFortAthenaAISpawnerDataComponent_Behavior();
};

