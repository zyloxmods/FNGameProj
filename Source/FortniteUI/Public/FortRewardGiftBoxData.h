#pragma once
#include "CoreMinimal.h"
#include "FortRewardNotificationData.h"
#include "FortRewardGiftBoxData.generated.h"

class UFortGiftBoxItem;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortRewardGiftBoxData : public UFortRewardNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* GiftBox;
    
    UFortRewardGiftBoxData();
};

