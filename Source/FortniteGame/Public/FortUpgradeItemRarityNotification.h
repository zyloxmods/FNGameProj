#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "FortUpgradeItemRarityNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortUpgradeItemRarityNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> ItemsGranted;
    
    FORTNITEGAME_API FFortUpgradeItemRarityNotification();
};

