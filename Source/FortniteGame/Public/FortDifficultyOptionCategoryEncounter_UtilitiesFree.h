#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_UtilitiesFree.generated.h"

class UFortDifficultyOptionEncounter_UtilitiesFree;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_UtilitiesFree : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_UtilitiesFree>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_UtilitiesFree();
};

