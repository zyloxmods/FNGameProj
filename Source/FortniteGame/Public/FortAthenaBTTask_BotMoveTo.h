#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "FortAthenaBTTask_BotMoveTo.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTTask_BotMoveTo : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementResultKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowRandomWobble: 1;
    
public:
    UFortAthenaBTTask_BotMoveTo();
};

