#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonBannerLevel.h"
#include "AthenaSeasonBannerLevelSchedule.generated.h"

USTRUCT(BlueprintType)
struct FAthenaSeasonBannerLevelSchedule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAthenaSeasonBannerLevel> Levels;
    
    FORTNITEGAME_API FAthenaSeasonBannerLevelSchedule();
};

