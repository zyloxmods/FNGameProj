#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMissionPlacementActorItem.h"
#include "FortMissionPlacementFoundationItem.h"
#include "FortMissionPlacementItems.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionPlacementItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAddToChosenPlacementActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionPlacementFoundationItem> AdditionalWorldFoundations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionPlacementActorItem> ActorsAndLocations;
    
    FORTNITEGAME_API FFortMissionPlacementItems();
};

