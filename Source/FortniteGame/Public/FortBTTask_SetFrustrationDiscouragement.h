#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FortBTTask_SetFrustrationDiscouragement.generated.h"

UCLASS(Blueprintable)
class UFortBTTask_SetFrustrationDiscouragement : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscouragementDuration;
    
public:
    UFortBTTask_SetFrustrationDiscouragement();
};

