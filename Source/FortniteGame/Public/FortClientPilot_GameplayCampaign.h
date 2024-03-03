#pragma once
#include "CoreMinimal.h"
#include "FortClientPilot_GameplayBase.h"
#include "FortClientPilot_GameplayCampaign.generated.h"

class ABuildingActor;

UCLASS(Blueprintable)
class UFortClientPilot_GameplayCampaign : public UFortClientPilot_GameplayBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* MissionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* PrimaryMissionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> AllMissionTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> ActiveMissionTargets;
    
    UFortClientPilot_GameplayCampaign();
};

