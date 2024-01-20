#pragma once
#include "CoreMinimal.h"
#include "EFortAIDirectorEvent.h"
#include "EFortAIDirectorFactorContribution.h"
#include "FortAIDirectorFactorContribution.generated.h"

USTRUCT(BlueprintType)
struct FFortAIDirectorFactorContribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIDirectorEvent AIDirectorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortAIDirectorFactorContribution::Type> ContributionType;
    
    FORTNITEGAME_API FFortAIDirectorFactorContribution();
};

