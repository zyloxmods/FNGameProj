#pragma once
#include "CoreMinimal.h"
#include "FortTwitchViewerNameAndAccountId.h"
#include "FortTwitchViewerGrantedQuestNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortTwitchViewerGrantedQuestNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestTemplateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTwitchViewerNameAndAccountId> ViewerIds;
    
    FFortTwitchViewerGrantedQuestNotification();
};

