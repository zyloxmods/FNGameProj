#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortAIEncounterPIDControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterPIDControllerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ProportionalGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle IntegralGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle DerivativeGain;
    
    FORTNITEGAME_API FFortAIEncounterPIDControllerSettings();
};

