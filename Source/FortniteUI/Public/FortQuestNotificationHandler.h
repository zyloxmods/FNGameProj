#pragma once
#include "CoreMinimal.h"
#include "FortDialogNotificationHandler.h"
#include "FortQuestNotificationHandler.generated.h"

class UFortQuestItem;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortQuestNotificationHandler : public UFortDialogNotificationHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItem* Quest;
    
    UFortQuestNotificationHandler();
};

