#pragma once
#include "CoreMinimal.h"
#include "FortMissionInfoOption.generated.h"

class UFortMissionInfo;

USTRUCT(BlueprintType)
struct FFortMissionInfoOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMissionInfo> MissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDifficultyLevel;
    
    FORTNITEGAME_API FFortMissionInfoOption();
};

