#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortCreativeRiftOverlapParams.generated.h"

class ABuildingRift;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class UFortCreativeRiftOverlapParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingRift* RiftSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* Player;
    
    UFortCreativeRiftOverlapParams();
};

