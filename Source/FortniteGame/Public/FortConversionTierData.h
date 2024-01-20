#pragma once
#include "CoreMinimal.h"
#include "FortConversionTierData.generated.h"

USTRUCT(BlueprintType)
struct FFortConversionTierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TierCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredItemQuantity;
    
    FORTNITEGAME_API FFortConversionTierData();
};

