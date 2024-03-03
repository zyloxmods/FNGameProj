#pragma once
#include "CoreMinimal.h"
#include "FortTwitchViewerNameAndAccountId.h"
#include "FortTwitchViewerCompletedQuestNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortTwitchViewerCompletedQuestNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTwitchViewerNameAndAccountId> ViewerIds;
    
    FORTNITEGAME_API FFortTwitchViewerCompletedQuestNotification();
};

