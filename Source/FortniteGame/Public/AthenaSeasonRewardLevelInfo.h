#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "EAthenaSeasonRewardTrack.h"
#include "AthenaSeasonRewardLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FAthenaSeasonRewardLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaSeasonRewardTrack Track;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaRewardItemReference> Rewards;
    
    FORTNITEGAME_API FAthenaSeasonRewardLevelInfo();
};

