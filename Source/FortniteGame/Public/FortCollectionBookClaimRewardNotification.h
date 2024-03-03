#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortCollectionBookClaimRewardNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookClaimRewardNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Section;
    
    FORTNITEGAME_API FFortCollectionBookClaimRewardNotification();
};

