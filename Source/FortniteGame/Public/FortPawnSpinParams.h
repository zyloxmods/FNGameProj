#pragma once
#include "CoreMinimal.h"
#include "FortPawnSpinParams.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPawnSpinParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalSpin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlySpinWhenFalling;
    
    FFortPawnSpinParams();
};

