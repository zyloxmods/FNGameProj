#pragma once
#include "CoreMinimal.h"
#include "FortTierProgressionInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortTierProgressionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProgressionLayoutGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighestDefeatedTier;
    
    FORTNITEGAME_API FFortTierProgressionInfo();
};

