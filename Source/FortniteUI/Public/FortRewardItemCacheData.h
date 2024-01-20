#pragma once
#include "CoreMinimal.h"
#include "FortRewardNotificationData.h"
#include "FortRewardItemCacheData.generated.h"

class UFortItem;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortRewardItemCacheData : public UFortRewardNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* ItemCache;
    
    UFortRewardItemCacheData();
};

