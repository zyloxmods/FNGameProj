#pragma once
#include "CoreMinimal.h"
#include "FortLastMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortLastMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TheaterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Difficulty;
    
    FORTNITEUI_API FFortLastMissionInfo();
};

