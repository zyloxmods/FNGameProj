#pragma once
#include "CoreMinimal.h"
#include "FortDailyQuestRerollNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortDailyQuestRerollNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewQuestId;
    
    FORTNITEGAME_API FFortDailyQuestRerollNotification();
};

