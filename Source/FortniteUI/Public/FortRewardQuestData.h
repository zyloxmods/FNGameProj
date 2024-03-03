#pragma once
#include "CoreMinimal.h"
#include "FortRewardNotificationData.h"
#include "FortRewardQuestData.generated.h"

class UFortQuestItem;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortRewardQuestData : public UFortRewardNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItem* Quest;
    
    UFortRewardQuestData();
};

