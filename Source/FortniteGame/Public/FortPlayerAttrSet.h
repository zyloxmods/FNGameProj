#pragma once
#include "CoreMinimal.h"
#include "TickableAttributeSetInterface.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortPlayerAttrSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortPlayerAttrSet : public UFortAttributeSet/*, public ITickableAttributeSetInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stamina, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Stamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaRegenRate, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData StaminaRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaRegenDelay, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData StaminaRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxStamina, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaCost, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData StaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SprintCost, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData SprintCost;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemRegenMaxStack, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ItemRegenMaxStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemRegenCooldown, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ItemRegenCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemMaxStack, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ItemMaxStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoubleLootRollChance, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData DoubleLootRollChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoubleItemLootChance, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData DoubleItemLootChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoubleCraftChance, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData DoubleCraftChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraftingTimeMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData CraftingTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraftItemLevelBonusMin, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData CraftItemLevelBonusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraftItemLevelBonusMax, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData CraftItemLevelBonusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResourceHarvesting, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ResourceHarvesting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HarvestingTool, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData HarvestingTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtraLives, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ExtraLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResurrectTeammateDuration, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ResurrectTeammateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Fortitude_Team, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Fortitude_Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Offense_Team, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Offense_Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Tech_Team, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Tech_Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Team, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Resistance_Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TurboBuildFirstInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TurboBuildInterval;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ActiveEffectDuration;
    
    UFortPlayerAttrSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Tech_Team(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaRegenRate(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaRegenDelay(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaCost(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Stamina(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SprintCost(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResurrectTeammateDuration(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResourceHarvesting(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Resistance_Team(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Offense_Team(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxStamina(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemRegenMaxStack(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemRegenCooldown(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemMaxStack(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HarvestingTool(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Fortitude_Team(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtraLives(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoubleLootRollChance(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoubleItemLootChance(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoubleCraftChance(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftItemLevelBonusMin(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftItemLevelBonusMax(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftingTimeMultiplier(const FFortGameplayAttributeData& OldValue);
    
    
    // Fix for true pure virtual functions not being implemented
};

