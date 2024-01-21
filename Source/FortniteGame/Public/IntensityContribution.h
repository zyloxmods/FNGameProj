#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "EFortAIDirectorFactor.h"
#include "EFortCombatFactors.h"
#include "IntensityContribution.generated.h"

USTRUCT(BlueprintType)
struct FIntensityContribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCombatFactors::Type> CombatFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIDirectorFactor ContributingAIDirectorFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyContributionByCompletionPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle CompletionPercentageInitialMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle CompletionPercentageToStartReducingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle CompletionPercentageToStopReducingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyByNumberOfCriticalEncounterGoals;
    
    FORTNITEGAME_API FIntensityContribution();
};

