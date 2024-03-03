#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaDynamicRestedXpProgression.generated.h"

USTRUCT(BlueprintType)
struct FAthenaDynamicRestedXpProgression : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PctOfGoldenPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalculatedDynamicRestMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestXPPoolExchangeRate;
    
    FORTNITEGAME_API FAthenaDynamicRestedXpProgression();
};

