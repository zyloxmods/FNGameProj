#pragma once
#include "CoreMinimal.h"
#include "EAthenaMatchXpMultiplierSource.h"
#include "AthenaMatchXpMultiplierGroup.generated.h"

USTRUCT(BlueprintType)
struct FAthenaMatchXpMultiplierGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaMatchXpMultiplierSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FORTNITEGAME_API FAthenaMatchXpMultiplierGroup();
};

