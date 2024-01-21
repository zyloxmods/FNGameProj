#pragma once
#include "CoreMinimal.h"
#include "EFortAIDirectorFactor.h"
#include "FortAIDirectorFactorContribution.h"
#include "FortAIDirectorFactorData.generated.h"

USTRUCT(BlueprintType)
struct FFortAIDirectorFactorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIDirectorFactor AIDirectorFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIDirectorFactorContribution> ContributingEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    FORTNITEGAME_API FFortAIDirectorFactorData();
};

