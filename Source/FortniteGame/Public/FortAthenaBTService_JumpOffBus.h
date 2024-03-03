#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FortAthenaBTService_JumpOffBus.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_JumpOffBus : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpOffBusExecutionStatusName;
    
public:
    UFortAthenaBTService_JumpOffBus();
};

