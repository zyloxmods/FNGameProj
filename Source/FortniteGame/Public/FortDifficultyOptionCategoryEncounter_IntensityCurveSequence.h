#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_IntensityCurveSequence.generated.h"

class UFortDifficultyOptionEncounter_IntensityCurveSequence;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_IntensityCurveSequence : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_IntensityCurveSequence>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_IntensityCurveSequence();
};

