#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortLootNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortLootNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LootSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LootSourceInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult LootGranted;
    
    FFortLootNotification();
};

