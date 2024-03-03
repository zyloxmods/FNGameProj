#pragma once
#include "CoreMinimal.h"
#include "ECatalogSaleType.generated.h"

UENUM(BlueprintType)
namespace ECatalogSaleType {
    enum Type {
        NotOnSale,
        UndecoratedNewPrice,
        AmountOff,
        PercentOff,
        PercentOn,
        Strikethrough,
        MAX,
    };
}

