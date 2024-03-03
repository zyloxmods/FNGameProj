#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElementalCharValues.generated.h"

USTRUCT(BlueprintType)
struct FElementalCharValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FireCharColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectricalCharEmissive;
    
    FORTNITEGAME_API FElementalCharValues();
};

