#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortHomebaseSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortHomebaseSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Keep_Level, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Keep_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Keep_AmmoStash_Level, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Keep_AmmoStash_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Keep_Armory_Level, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Keep_Armory_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Keep_Medical_Level, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Keep_Medical_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Keep_Storage_Level, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Keep_Storage_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Keep_Workshop_Level, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Keep_Workshop_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Keep_StructureCap, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Keep_StructureCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Keep_PermaniteCap, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Keep_PermaniteCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Manor_Level, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Manor_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Manor_StructureCap, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Manor_StructureCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InventorySizeBonus, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData InventorySizeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldInventorySizeBonus, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WorldInventorySizeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StorageInventorySizeBonus, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData StorageInventorySizeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResearchPointMaxBonus, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ResearchPointMaxBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLevelBonus_Global, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxLevelBonus_Global;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLevelBonus_Schematics, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxLevelBonus_Schematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLevelBonus_Schematics_Ranged, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxLevelBonus_Schematics_Ranged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLevelBonus_Schematics_Melee, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxLevelBonus_Schematics_Melee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLevelBonus_Schematics_Traps, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxLevelBonus_Schematics_Traps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLevelBonus_Personnel, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxLevelBonus_Personnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLevelBonus_Alterations, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxLevelBonus_Alterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_rate_per_second_collector_Token_collectionresource_nodegatetoken01, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData rate_per_second_collector_Token_collectionresource_nodegatetoken01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_max_capacity_collector_Token_collectionresource_nodegatetoken01, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData max_capacity_collector_Token_collectionresource_nodegatetoken01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SupplyDrop_Magnitude, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData SupplyDrop_Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SupplyDrop_Level, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData SupplyDrop_Level;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ExpeditionSquadOne_Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ExpeditionSquadTwo_Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ExpeditionSquadThree_Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ExpeditionSquadFour_Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ExpeditionSquadFive_Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ExpeditionSquadSix_Power;
    
    UFortHomebaseSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldInventorySizeBonus(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SupplyDrop_Magnitude(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SupplyDrop_Level(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StorageInventorySizeBonus(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResearchPointMaxBonus(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_rate_per_second_collector_Token_collectionresource_nodegatetoken01(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLevelBonus_Schematics_Traps(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLevelBonus_Schematics_Ranged(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLevelBonus_Schematics_Melee(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLevelBonus_Schematics(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLevelBonus_Personnel(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLevelBonus_Global(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLevelBonus_Alterations(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_max_capacity_collector_Token_collectionresource_nodegatetoken01(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Manor_StructureCap(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Manor_Level(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keep_Workshop_Level(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keep_StructureCap(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keep_Storage_Level(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keep_PermaniteCap(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keep_Medical_Level(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keep_Level(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keep_Armory_Level(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keep_AmmoStash_Level(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InventorySizeBonus(const FFortGameplayAttributeData& OldValue);
    
};

