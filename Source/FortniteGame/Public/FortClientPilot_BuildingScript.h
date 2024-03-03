#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortClientPilot_BuildingScript.generated.h"

class UFortClientPilot_ExplicitBuildingStep;

UCLASS(Blueprintable)
class UFortClientPilot_BuildingScript : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortClientPilot_ExplicitBuildingStep*> BuildingSteps;
    
    UFortClientPilot_BuildingScript();
};

