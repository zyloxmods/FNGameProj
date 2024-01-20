#pragma once
#include "CoreMinimal.h"
#include "RewardBadgesProgression.h"
#include "TieredCollectionProgressionDataBase.h"
#include "RewardBadgesCollectionProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FRewardBadgesCollectionProgressionData : public FTieredCollectionProgressionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardBadgesProgression> BadgeCollections;
    
    FORTNITEGAME_API FRewardBadgesCollectionProgressionData();
};

