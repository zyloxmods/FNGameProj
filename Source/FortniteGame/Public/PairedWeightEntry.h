#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PairedWeightEntry.generated.h"

USTRUCT(BlueprintType)
struct FPairedWeightEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Value;
    
    FORTNITEGAME_API FPairedWeightEntry();
};

