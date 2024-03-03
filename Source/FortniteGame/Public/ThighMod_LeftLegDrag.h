#pragma once
#include "CoreMinimal.h"
#include "ThighMod_LeftLegDrag.generated.h"

USTRUCT(BlueprintType)
struct FThighMod_LeftLegDrag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftLegBankSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftLegPitchSpeed;
    
    FORTNITEGAME_API FThighMod_LeftLegDrag();
};

