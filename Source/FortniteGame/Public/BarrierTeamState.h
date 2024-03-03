#pragma once
#include "CoreMinimal.h"
#include "EBarrierFoodTeam.h"
#include "BarrierTeamState.generated.h"

class AAthenaBarrierFlag;
class AAthenaBarrierObjective;

USTRUCT(BlueprintType)
struct FBarrierTeamState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBarrierFoodTeam FoodTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaBarrierFlag* ObjectiveFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaBarrierObjective* ObjectiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnEnabled;
    
    FORTNITEGAME_API FBarrierTeamState();
};

