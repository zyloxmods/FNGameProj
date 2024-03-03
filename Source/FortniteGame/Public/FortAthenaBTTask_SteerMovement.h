#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "FortAthenaBTTask_SteerMovement.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTTask_SteerMovement : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SteerDirectionKeySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetControlRotation: 1;
    
public:
    UFortAthenaBTTask_SteerMovement();
};

