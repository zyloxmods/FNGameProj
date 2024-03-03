#pragma once
#include "CoreMinimal.h"
#include "InventoryFlushPayload.generated.h"

USTRUCT(BlueprintType)
struct FInventoryFlushPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InventoryNames;
    
    SIDECARSYS_API FInventoryFlushPayload();
};

