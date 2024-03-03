#pragma once
#include "CoreMinimal.h"
#include "BuildingActor.h"
#include "FortEnemySpawn.generated.h"

UCLASS(Blueprintable)
class AFortEnemySpawn : public ABuildingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClusterRadius;
    
    AFortEnemySpawn();
};

