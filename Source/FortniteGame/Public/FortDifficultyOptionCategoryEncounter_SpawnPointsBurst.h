#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_SpawnPointsBurst.generated.h"

class UFortDifficultyOptionEncounter_SpawnPointsBurst;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_SpawnPointsBurst : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_SpawnPointsBurst>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_SpawnPointsBurst();
};

