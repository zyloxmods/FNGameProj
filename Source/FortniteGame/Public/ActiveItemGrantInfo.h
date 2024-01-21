#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ActiveItemGrantInfo.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FActiveItemGrantInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AmountToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxAmount;
    
    FORTNITEGAME_API FActiveItemGrantInfo();
};
FORCEINLINE uint32 GetTypeHash(const FActiveItemGrantInfo) { return 0; }

