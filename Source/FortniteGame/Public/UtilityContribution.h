#pragma once
#include "CoreMinimal.h"
#include "EFortAIDirectorFactor.h"
#include "EFortCombatFactors.h"
#include "EFortFactorContributionType.h"
#include "UtilityContribution.generated.h"

USTRUCT(BlueprintType)
struct FUtilityContribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCombatFactors::Type> ContributingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIDirectorFactor ContributingAIDirectorFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFactorContributionType::Type> ContributionType;
    
    FORTNITEGAME_API FUtilityContribution();
};

