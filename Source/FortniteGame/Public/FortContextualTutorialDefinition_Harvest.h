#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorialDefinition.h"
#include "FortContextualTutorialDefinition_Harvest.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorialDefinition_Harvest : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HarvestiblesCheckRayCastDistance;
    
public:
    UFortContextualTutorialDefinition_Harvest();
};

