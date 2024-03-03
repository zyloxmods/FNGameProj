#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FortAthenaBTTask_DynamicBlueprint.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTTask_DynamicBlueprint : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicBlueprintStatusKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicBlueprintActorKeyName;
    
public:
    UFortAthenaBTTask_DynamicBlueprint();
};

