#pragma once
#include "CoreMinimal.h"
#include "FortSpecialEventGEData.h"
#include "FortSpecialEventOverrideParts.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FFortSpecialEventOverrideParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> OverrideParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSpecialEventGEData GameplayEffectToApplyOnSwap;
    
    FORTNITEGAME_API FFortSpecialEventOverrideParts();
};

