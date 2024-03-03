#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "FortConversionResultNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortConversionResultNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> ItemsGranted;
    
    FORTNITEGAME_API FFortConversionResultNotification();
};

