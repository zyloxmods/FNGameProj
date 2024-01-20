#pragma once
#include "CoreMinimal.h"
#include "FortEncounterAIDirectorFactor.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterAIDirectorFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedPeriodValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalPeriodTime;
    
    FORTNITEGAME_API FFortEncounterAIDirectorFactor();
};

