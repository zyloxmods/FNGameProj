#pragma once
#include "CoreMinimal.h"
#include "FortEarnScoreNotification.h"
#include "FortEndMatchScoreNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortEndMatchScoreNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFortEarnScoreNotification> scoreNotifications;
    
    FORTNITEGAME_API FFortEndMatchScoreNotification();
};

