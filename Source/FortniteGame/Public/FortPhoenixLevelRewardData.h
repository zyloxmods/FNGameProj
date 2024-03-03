#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortRewardQuantityPair.h"
#include "FortPhoenixLevelRewardData.generated.h"

USTRUCT(BlueprintType)
struct FFortPhoenixLevelRewardData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalRequiredXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMajorReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortRewardQuantityPair> VisibleReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortRewardQuantityPair> HiddenRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventTag;
    
    FORTNITEGAME_API FFortPhoenixLevelRewardData();
};

