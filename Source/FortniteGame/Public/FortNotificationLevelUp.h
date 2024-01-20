#pragma once
#include "CoreMinimal.h"
#include "FortLootNotification.h"
#include "FortNotificationLevelUp.generated.h"

USTRUCT(BlueprintType)
struct FFortNotificationLevelUp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HeroId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortLootNotification Loot;
    
    FORTNITEGAME_API FFortNotificationLevelUp();
};

