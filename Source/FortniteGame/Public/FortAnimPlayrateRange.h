#pragma once
#include "CoreMinimal.h"
#include "FortAnimPlayrateRange.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimPlayrateRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlayrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayrate;
    
    FORTNITEGAME_API FFortAnimPlayrateRange();
};

