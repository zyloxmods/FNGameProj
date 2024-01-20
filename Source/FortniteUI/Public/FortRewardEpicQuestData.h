#pragma once
#include "CoreMinimal.h"
#include "FortRewardNotificationData.h"
#include "FortRewardEpicQuestData.generated.h"

class UFortQuestItem;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortRewardEpicQuestData : public UFortRewardNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItem* Quest;
    
    UFortRewardEpicQuestData();
};

