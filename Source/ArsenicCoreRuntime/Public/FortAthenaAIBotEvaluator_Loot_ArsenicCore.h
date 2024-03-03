#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "FortAthenaAIBotEvaluator_Loot.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIBotEvaluator_Loot_ArsenicCore.generated.h"

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Loot_ArsenicCore : public UFortAthenaAIBotEvaluator_Loot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CommonRarityLootScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UncommonRarityLootScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RareRarityLootScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LegendaryRarityLootScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MythicRarityLootScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TranscendentRarityLootScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity MinRarityToLootWhenAboveLootConsumeHealth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BatchLootBlacklistDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BatchLootBlacklistRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LootConsumeHealthPercentThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlacklistedLootTags;
    
public:

};

