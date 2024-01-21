#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortRewardQuantityPair.h"
#include "FortPostMaxAccountLevelRewardData.generated.h"

USTRUCT(BlueprintType)
struct FFortPostMaxAccountLevelRewardData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortRewardQuantityPair> Rewards;
    
    FORTNITEGAME_API FFortPostMaxAccountLevelRewardData();
};

