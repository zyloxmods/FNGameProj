#pragma once
#include "CoreMinimal.h"
#include "FortDailyQuestRerollNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortDailyQuestRerollNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewQuestId;
    
    FFortDailyQuestRerollNotification();
};

