#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_SpawnTiming.generated.h"

class UFortDifficultyOptionEncounter_SpawnTiming;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_SpawnTiming : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_SpawnTiming>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_SpawnTiming();
};

