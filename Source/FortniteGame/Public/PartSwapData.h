#pragma once
#include "CoreMinimal.h"
#include "PartSwapData.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FPartSwapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> PartsToSwapIn;
    
    FORTNITEGAME_API FPartSwapData();
};

