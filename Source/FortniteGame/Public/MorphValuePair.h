#pragma once
#include "CoreMinimal.h"
#include "MorphValuePair.generated.h"

USTRUCT(BlueprintType)
struct FMorphValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphValue;
    
    FORTNITEGAME_API FMorphValuePair();
};

