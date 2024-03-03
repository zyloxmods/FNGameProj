#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortCreativeRiftSpawnParams.generated.h"

class ABuildingRift;

UCLASS(Blueprintable)
class UFortCreativeRiftSpawnParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingRift* RiftSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResumeRift;
    
    UFortCreativeRiftSpawnParams();
};

