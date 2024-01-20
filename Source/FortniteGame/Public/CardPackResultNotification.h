#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "CardPackResultNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCardPackResultNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult LootGranted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayLevel;
    
    FCardPackResultNotification();
};

