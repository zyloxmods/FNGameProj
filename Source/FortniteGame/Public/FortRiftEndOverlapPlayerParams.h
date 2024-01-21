#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortRiftEndOverlapPlayerParams.generated.h"

class ABuildingRift;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class UFortRiftEndOverlapPlayerParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingRift* Rift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* Player;
    
    UFortRiftEndOverlapPlayerParams();
};

