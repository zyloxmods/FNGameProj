#pragma once
#include "CoreMinimal.h"
#include "ItemIdAndQuantityPair.generated.h"

USTRUCT(BlueprintType)
struct FItemIdAndQuantityPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FORTNITEGAME_API FItemIdAndQuantityPair();
};

