#pragma once
#include "CoreMinimal.h"
#include "FortTwitchViewerNameAndAccountId.h"
#include "FortTwitchViewerGrantedQuestNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortTwitchViewerGrantedQuestNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTwitchViewerNameAndAccountId> ViewerIds;
    
    FORTNITEGAME_API FFortTwitchViewerGrantedQuestNotification();
};

