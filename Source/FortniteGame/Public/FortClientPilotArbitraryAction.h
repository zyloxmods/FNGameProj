#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortClientPilotArbitraryAction.generated.h"

class UFortClientPilotActionBase;

UCLASS(Blueprintable, Config=Game)
class UFortClientPilotArbitraryAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortClientPilotActionBase*> ActionSteps;
    
    UFortClientPilotArbitraryAction();
};

