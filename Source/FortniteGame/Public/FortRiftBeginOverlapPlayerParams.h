#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortRiftBeginOverlapPlayerParams.generated.h"

class ABuildingRift;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class UFortRiftBeginOverlapPlayerParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingRift* Rift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* Player;
    
    UFortRiftBeginOverlapPlayerParams();
};

