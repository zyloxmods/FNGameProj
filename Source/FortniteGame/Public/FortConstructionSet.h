#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortConstructionSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortConstructionSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
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
    
    UFortConstructionSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapReloadSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapMaxDurability();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapHealingSource();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapDiceCritMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapDiceCritChance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapBaseDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapArmSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepairSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepairCost();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxBuildLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildingSkill();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildCost();
    
};

