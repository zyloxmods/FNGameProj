#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_SpawnPointsCurve.generated.h"

class UFortDifficultyOptionEncounter_SpawnPointsCurve;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_SpawnPointsCurve : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_SpawnPointsCurve>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_SpawnPointsCurve();
};

