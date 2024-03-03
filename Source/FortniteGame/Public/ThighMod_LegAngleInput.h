#pragma once
#include "CoreMinimal.h"
#include "ThighMod_LegAngleInput.generated.h"

USTRUCT(BlueprintType)
struct FThighMod_LegAngleInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegBankPitchForwardA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegBankPitchForwardB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegBankPitchLeanStrafeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegBankPitchLeanStrafeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegBankPitchTurnA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegBankPitchTurnB;
    
    FORTNITEGAME_API FThighMod_LegAngleInput();
};

