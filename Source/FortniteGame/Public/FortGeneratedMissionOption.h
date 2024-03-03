#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortGeneratedMissionOption.generated.h"

class UFortDifficultyOptionCategoryMission;
class UFortDifficultyOptionMission;

USTRUCT(BlueprintType)
struct FFortGeneratedMissionOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyOptionCategoryMission* MissionOptionCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDifficultyOptionMission> MissionOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeLerpValue;
    
    FORTNITEGAME_API FFortGeneratedMissionOption();
};

