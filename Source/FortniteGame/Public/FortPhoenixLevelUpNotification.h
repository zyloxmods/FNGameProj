#pragma once
#include "CoreMinimal.h"
#include "FortLootNotification.h"
#include "FortPhoenixLevelUpNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortPhoenixLevelUpNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortLootNotification Loot;
    
    FORTNITEGAME_API FFortPhoenixLevelUpNotification();
};

