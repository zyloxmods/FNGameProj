#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortRiftCreatedParams.generated.h"

class ABuildingRift;

UCLASS(Blueprintable)
class UFortRiftCreatedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingRift* Rift;
    
    UFortRiftCreatedParams();
};

