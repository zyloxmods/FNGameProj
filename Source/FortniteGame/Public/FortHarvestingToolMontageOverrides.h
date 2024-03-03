#pragma once
#include "CoreMinimal.h"
#include "FortHarvestingToolMontageOverrideData.h"
#include "FortHarvestingToolMontageOverrides.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortHarvestingToolMontageOverrides {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortHarvestingToolMontageOverrideData> MontageOverrideData;
    
public:
    FFortHarvestingToolMontageOverrides();
};

