#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookRewards.h"
#include "FortRewardNotificationData.h"
#include "FortRewardCollectionBookData.generated.h"

UCLASS(Blueprintable)
class FORTNITEUI_API UFortRewardCollectionBookData : public UFortRewardNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCollectionBookRewards CollectionBookRewards;
    
    UFortRewardCollectionBookData();
};

