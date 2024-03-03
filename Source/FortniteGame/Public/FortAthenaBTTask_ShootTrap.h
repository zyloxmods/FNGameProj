#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "FortAthenaBTTask_ShootTrap.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTTask_ShootTrap : public UBTTask_Wait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorKey;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrapOnPathKeyName;
    
public:
    UFortAthenaBTTask_ShootTrap();
};

