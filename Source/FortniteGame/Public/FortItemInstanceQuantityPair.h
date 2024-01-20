#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryType.h"
#include "FortItemInstanceQuantityPair.generated.h"

class UFortItem;

USTRUCT(BlueprintType)
struct FFortItemInstanceQuantityPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortInventoryType::Type> InventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FORTNITEGAME_API FFortItemInstanceQuantityPair();
};

