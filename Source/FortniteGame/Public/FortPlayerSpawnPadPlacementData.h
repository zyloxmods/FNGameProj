#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPlayerSpawnPadPlacementData.generated.h"

class ABuildingSMActor;
class UEnvQuery;

USTRUCT(BlueprintType)
struct FFortPlayerSpawnPadPlacementData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* PlacementQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABuildingSMActor> ActorToPlace;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToGrid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustPlacementForFloors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAddToChosenPlacementActor;
    
public:
    FORTNITEGAME_API FFortPlayerSpawnPadPlacementData();
};

