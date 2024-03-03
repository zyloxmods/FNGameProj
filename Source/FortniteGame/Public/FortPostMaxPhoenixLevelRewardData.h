#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortRewardQuantityPair.h"
#include "FortPostMaxPhoenixLevelRewardData.generated.h"

USTRUCT(BlueprintType)
struct FFortPostMaxPhoenixLevelRewardData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMajorReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortRewardQuantityPair> VisibleReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventTag;
    
    FORTNITEGAME_API FFortPostMaxPhoenixLevelRewardData();
};

