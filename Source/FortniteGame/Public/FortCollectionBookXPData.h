#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortRewardInfo.h"
#include "FortCollectionBookXPData.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookXPData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalXpToGetToThisLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRewardInfo Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMajorReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoOpenRewardCardPacks;
    
    FORTNITEGAME_API FFortCollectionBookXPData();
};

