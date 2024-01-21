#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_TimedModifierTags.generated.h"

class UFortDifficultyOptionEncounter_TimedModifierTags;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_TimedModifierTags : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_TimedModifierTags>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_TimedModifierTags();
};

