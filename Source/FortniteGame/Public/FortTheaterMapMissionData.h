#pragma once
#include "CoreMinimal.h"
#include "FortTheaterDifficultyWeight.h"
#include "FortTheaterMissionWeight.h"
#include "FortTheaterMapMissionData.generated.h"

USTRUCT(BlueprintType)
struct FFortTheaterMapMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTheaterMissionWeight> MissionWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTheaterDifficultyWeight> DifficultyWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMissionsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMissionsToChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionChangeFrequency;
    
    FORTNITEGAME_API FFortTheaterMapMissionData();
};

