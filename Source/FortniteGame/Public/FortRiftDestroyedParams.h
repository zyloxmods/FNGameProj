#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortRiftDestroyedParams.generated.h"

class ABuildingRift;

UCLASS(Blueprintable)
class UFortRiftDestroyedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingRift* Rift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseRift;
    
    UFortRiftDestroyedParams();
};

