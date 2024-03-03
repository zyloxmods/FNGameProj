#pragma once
#include "CoreMinimal.h"
#include "EFortMtxStoreOfferType.generated.h"

UENUM(BlueprintType)
enum class EFortMtxStoreOfferType : uint8 {
    FoundersPack,
    CurrencyPack,
    Unknown,
    Max_None,
};

