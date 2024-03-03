#pragma once
#include "CoreMinimal.h"
#include "EFortAIUtility.h"
#include "UtilityTypeFloatPair.generated.h"

USTRUCT(BlueprintType)
struct FUtilityTypeFloatPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortAIUtility::Type> Utility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FORTNITEGAME_API FUtilityTypeFloatPair();
};

