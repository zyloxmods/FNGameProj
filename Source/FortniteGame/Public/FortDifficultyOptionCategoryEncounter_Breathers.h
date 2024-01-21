#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_Breathers.generated.h"

class UFortDifficultyOptionEncounter_Breathers;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_Breathers : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_Breathers>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_Breathers();
};

