#pragma once
#include "CoreMinimal.h"
#include "DroppingAgentData.generated.h"

class AAthenaAIController;
class ABuildingActor;

USTRUCT(BlueprintType)
struct FDroppingAgentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* MovementBase;
    
    FORTNITEGAME_API FDroppingAgentData();
};

