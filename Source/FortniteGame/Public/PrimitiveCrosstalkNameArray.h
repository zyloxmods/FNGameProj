#pragma once
#include "CoreMinimal.h"
#include "PrimitiveCrosstalkNameArray.generated.h"

USTRUCT(BlueprintType)
struct FPrimitiveCrosstalkNameArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TArray<FName> SupportedFunctions;
    
    FORTNITEGAME_API FPrimitiveCrosstalkNameArray();
};

