#pragma once
#include "CoreMinimal.h"
#include "EStoreCurrencyType.generated.h"

UENUM(BlueprintType)
namespace EStoreCurrencyType {
    enum Type {
        RealMoney,
        MtxCurrency,
        GameItem,
        Other,
        MAX,
    };
}

