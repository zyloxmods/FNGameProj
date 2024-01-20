#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortAISpawnGroupUpgradeData.generated.h"

class UFortAISpawnGroupCapsCategorySet;
class UFortAISpawnGroupUpgrade;
class UFortAISpawnGroupUpgradeProbabilities;

USTRUCT(BlueprintType)
struct FFortAISpawnGroupUpgradeData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAISpawnGroupUpgrade> SpawnGroupUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAISpawnGroupUpgradeProbabilities> UpgradeProbabilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAISpawnGroupCapsCategorySet> SpawnGroupCapsCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery EncounterTagRequirementsQuery;
    
public:
    FORTNITEGAME_API FFortAISpawnGroupUpgradeData();
};

