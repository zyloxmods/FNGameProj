#pragma once
#include "CoreMinimal.h"
#include "FortDeferredNewActorData.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FFortDeferredNewActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* BuildingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedLevelIndex;
    
    FORTNITEGAME_API FFortDeferredNewActorData();
};

