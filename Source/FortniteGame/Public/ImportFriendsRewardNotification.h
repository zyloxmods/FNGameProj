#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "ImportFriendsRewardNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FImportFriendsRewardNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> LootGranted;
    
    FImportFriendsRewardNotification();
};

