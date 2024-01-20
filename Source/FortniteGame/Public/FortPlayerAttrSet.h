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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ActiveEffectDuration;
    
    UFortPlayerAttrSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Tech_Team();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaRegenRate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaRegenDelay();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaCost();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Stamina();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SprintCost();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResurrectTeammateDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResourceHarvesting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Resistance_Team();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Offense_Team();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxStamina();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemRegenMaxStack();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemRegenCooldown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemMaxStack();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HarvestingTool();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Fortitude_Team();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtraLives();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoubleLootRollChance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoubleItemLootChance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoubleCraftChance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftItemLevelBonusMin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftItemLevelBonusMax();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftingTimeMultiplier();
    
    
    // Fix for true pure virtual functions not being implemented
};

