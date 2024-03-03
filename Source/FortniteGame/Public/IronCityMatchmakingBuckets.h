#pragma once
#include "CoreMinimal.h"
#include "IronCityMatchmakingBuckets.generated.h"

USTRUCT(BlueprintType)
struct FIronCityMatchmakingBuckets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecommendedRating;
    
    FORTNITEGAME_API FIronCityMatchmakingBuckets();
};

