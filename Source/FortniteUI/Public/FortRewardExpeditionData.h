#pragma once
#include "CoreMinimal.h"
#include "FortRewardNotificationData.h"
#include "FortRewardExpeditionData.generated.h"

class UFortExpeditionItem;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortRewardExpeditionData : public UFortRewardNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortExpeditionItem* Expedition;
    
    UFortRewardExpeditionData();
};

