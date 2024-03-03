#pragma once
#include "CoreMinimal.h"
#include "PairedWeightEntry.h"
#include "PairedWeightContainer.generated.h"

USTRUCT(BlueprintType)
struct FPairedWeightContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPairedWeightEntry> Weights;
    
    FORTNITEGAME_API FPairedWeightContainer();
};

