#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FortAthenaBTService_Sprinting.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_Sprinting : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SprintExecutionStatusName;
    
public:
    UFortAthenaBTService_Sprinting();
};

