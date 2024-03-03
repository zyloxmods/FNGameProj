#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortConstructionSet.generated.h"

UCLASS(Blueprintable)
class UFortConstructionSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildSpeed, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BuildSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepairSpeed, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData RepairSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildCost, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BuildCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepairCost, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData RepairCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxBuildLevel, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxBuildLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildingSkill, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BuildingSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapArmSpeed, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TrapArmSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapReloadSpeed, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TrapReloadSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapBaseDamage, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TrapBaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapMaxDurability, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TrapMaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapDiceCritChance, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TrapDiceCritChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapDiceCritMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TrapDiceCritMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapHealingSource, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData TrapHealingSource;
    
public:
    UFortConstructionSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapReloadSpeed(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapMaxDurability(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapHealingSource(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapDiceCritMultiplier(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapDiceCritChance(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapBaseDamage(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapArmSpeed(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepairSpeed(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepairCost(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxBuildLevel(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildSpeed(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildingSkill(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildCost(const FFortGameplayAttributeData& OldValue);
    
};

