#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionCategoryEncounter.h"
#include "Templates/SubclassOf.h"
#include "FortDifficultyOptionCategoryEncounter_UtilitiesAdjustment.generated.h"

class UFortDifficultyOptionEncounter_UtilitiesAdjustment;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionCategoryEncounter_UtilitiesAdjustment : public UFortDifficultyOptionCategoryEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortDifficultyOptionEncounter_UtilitiesAdjustment>> Options;
    
public:
    UFortDifficultyOptionCategoryEncounter_UtilitiesAdjustment();
};

