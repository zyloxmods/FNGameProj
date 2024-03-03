#pragma once
#include "CoreMinimal.h"
#include "FortMinigameGroupStats.h"
#include "FortMinigamePlayerBucketStats.generated.h"

USTRUCT(BlueprintType)
struct FFortMinigamePlayerBucketStats : public FFortMinigameGroupStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BucketIndex;
    
    FORTNITEGAME_API FFortMinigamePlayerBucketStats();
};

