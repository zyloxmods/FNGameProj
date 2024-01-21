#pragma once
#include "CoreMinimal.h"
#include "EBarrierFoodTeam.h"
#include "EBarrierObjectiveDamageState.h"
#include "BarrierObjectState.generated.h"

class AAthenaBarrierObjective;

USTRUCT(BlueprintType)
struct FBarrierObjectState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaBarrierObjective* ObjectiveActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBarrierFoodTeam FoodTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBarrierObjectiveDamageState DamageState;
    
    FORTNITEUI_API FBarrierObjectState();
};

