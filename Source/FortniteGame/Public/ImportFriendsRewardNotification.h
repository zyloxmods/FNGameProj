#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "ImportFriendsRewardNotification.generated.h"

USTRUCT(BlueprintType)
struct FImportFriendsRewardNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> LootGranted;
    
    FORTNITEGAME_API FImportFriendsRewardNotification();
};

