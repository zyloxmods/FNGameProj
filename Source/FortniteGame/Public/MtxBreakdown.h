#pragma once
#include "CoreMinimal.h"
#include "MtxBreakdown.generated.h"

USTRUCT(BlueprintType)
struct FMtxBreakdown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailableTotalMtx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailablePremiumMtx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnavailableTotalMtx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnavailablePremiumMtx;
    
    FORTNITEGAME_API FMtxBreakdown();
};

