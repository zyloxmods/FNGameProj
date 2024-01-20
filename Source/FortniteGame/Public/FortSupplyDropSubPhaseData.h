#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortSupplyDropSubPhaseData.generated.h"

USTRUCT(BlueprintType)
struct FFortSupplyDropSubPhaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropCap;
    
    FORTNITEGAME_API FFortSupplyDropSubPhaseData();
};

