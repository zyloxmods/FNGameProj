#pragma once
#include "CoreMinimal.h"
#include "FortStatManagerTag.h"
#include "FortCosmeticAdaptiveStatPair.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticAdaptiveStatPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortStatManagerTag StatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatValue;
    
    FORTNITEGAME_API FFortCosmeticAdaptiveStatPair();
};

