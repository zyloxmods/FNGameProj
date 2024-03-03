#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortRewardNotificationData.h"
#include "FortRewardPhoenixLevelUpData.generated.h"

UCLASS(Blueprintable)
class FORTNITEUI_API UFortRewardPhoenixLevelUpData : public UFortRewardNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhoenixLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemInstanceQuantityPair> Rewards;
    
    UFortRewardPhoenixLevelUpData();
};

