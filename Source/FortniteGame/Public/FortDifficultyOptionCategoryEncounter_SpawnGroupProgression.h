#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_SpawnGroupProgression.generated.h"

class UFortDifficultyOptionEncounter_SpawnGroupProgression;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_SpawnGroupProgression : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDifficultyOptionEncounter_SpawnGroupProgression> SpawnGroupProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_SpawnGroupProgression>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_SpawnGroupProgression();
};

