#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FortAthenaBTService_Jump.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_Jump : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpExecutionStatusName;
    
public:
    UFortAthenaBTService_Jump();
};

