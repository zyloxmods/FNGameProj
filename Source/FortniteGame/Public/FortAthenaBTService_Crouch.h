#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FortAthenaBTService_Crouch.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_Crouch : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrouchExecutionStatusName;
    
public:
    UFortAthenaBTService_Crouch();
};

