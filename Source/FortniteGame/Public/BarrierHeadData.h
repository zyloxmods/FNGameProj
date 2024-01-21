#pragma once
#include "CoreMinimal.h"
#include "BarrierHeadData.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FBarrierHeadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> PartsToSwapIn;
    
    FORTNITEGAME_API FBarrierHeadData();
};

