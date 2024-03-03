#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticAdaptiveStatPair.h"
#include "FortCosmeticAdaptiveStatPreview.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticAdaptiveStatPreview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticAdaptiveStatPair> StatValues;
    
    FORTNITEGAME_API FFortCosmeticAdaptiveStatPreview();
};

