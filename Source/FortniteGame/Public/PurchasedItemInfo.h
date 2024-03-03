#pragma once
#include "CoreMinimal.h"
#include "PurchasedItemInfo.generated.h"

class UFortItem;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPurchasedItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FPurchasedItemInfo();
};

