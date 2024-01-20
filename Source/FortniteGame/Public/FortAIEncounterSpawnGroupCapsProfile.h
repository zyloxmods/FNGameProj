#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAIEncounterSpawnGroupCapsCategory.h"
#include "FortAIEncounterSpawnGroupCapsProfile.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterSpawnGroupCapsProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EncounterTypeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterSpawnGroupCapsCategory> PopulationCategories;
    
    FORTNITEGAME_API FFortAIEncounterSpawnGroupCapsProfile();
};

