#pragma once
#include "CoreMinimal.h"
#include "FortPendingSlottedItemOperation.generated.h"

USTRUCT(BlueprintType)
struct FFortPendingSlottedItemOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlottedItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotRowName;
    
    FORTNITEGAME_API FFortPendingSlottedItemOperation();
};

