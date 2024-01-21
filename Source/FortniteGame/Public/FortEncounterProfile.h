#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortEncounterProfile.generated.h"

class UFortDifficultyOptionCategoryEncounter;
class UFortDifficultyOptionSetEncounter;

USTRUCT(BlueprintType)
struct FFortEncounterProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortDifficultyOptionSetEncounter> EncounterOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortDifficultyOptionCategoryEncounter*> OverrideCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReselectOptionsPerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EncounterTypeTags;
    
    FORTNITEGAME_API FFortEncounterProfile();
};

