#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "FortBTService_UpdateBotMissionBuilding.generated.h"

UCLASS(Blueprintable)
class UFortBTService_UpdateBotMissionBuilding : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector InterestLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BuildOrderKey;
    
    UFortBTService_UpdateBotMissionBuilding();
};

