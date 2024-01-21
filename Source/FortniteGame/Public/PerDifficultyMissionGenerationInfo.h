#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MissionGenerationInfo.h"
#include "PerDifficultyMissionGenerationInfo.generated.h"

USTRUCT(BlueprintType)
struct FPerDifficultyMissionGenerationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MinDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MaxDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionGenerationInfo> MissionGenerationInfos;
    
    FORTNITEGAME_API FPerDifficultyMissionGenerationInfo();
};

