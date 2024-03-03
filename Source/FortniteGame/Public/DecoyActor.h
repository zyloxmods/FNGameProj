#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "DecoyActor.generated.h"

UCLASS(Blueprintable)
class ADecoyActor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoalOverrideRadius;
    
    ADecoyActor();
};

