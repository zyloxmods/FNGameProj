#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "FortMissionPlacementActorPreferredTagInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionPlacementActorPreferredTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DifficultyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlacementActorPreferredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Difficulty;
    
    FORTNITEGAME_API FFortMissionPlacementActorPreferredTagInfo();
};

