#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "McpLootEntry.h"
#include "FortAccountItem.h"
#include "FortPrerollDataItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPrerollDataItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Expiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Highest_Rarity;
    
public:
    UFortPrerollDataItem();
};

