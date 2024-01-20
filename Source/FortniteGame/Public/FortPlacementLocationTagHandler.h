#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPlacementLocationTagHandler.generated.h"

class AActor;
class ABuildingActor;

USTRUCT(BlueprintType)
struct FFortPlacementLocationTagHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* SpawnLocationBuildingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToRemove;
    
    FORTNITEGAME_API FFortPlacementLocationTagHandler();
};

