#pragma once
#include "CoreMinimal.h"
#include "FortAIEncounterPIDController.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterPIDController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProportionalGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntegralGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DerivativeGain;
    
    FORTNITEGAME_API FFortAIEncounterPIDController();
};

