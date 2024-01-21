#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortDefenderConfigPanel.generated.h"

class ABuildingTrapDefender;
class AFortAIPawn;
class UFortItem;
class UFortSchematicItemDefinition;
class UFortWorldItem;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortDefenderConfigPanel : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> SelectedDefenderItem;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> SelectedWeaponItem;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> SelectedAmmoItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedAmmoQuantity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingTrapDefender> DefenderTrap;
    
public:
    UFortDefenderConfigPanel();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UnsummonDefender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SpawnDefender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponSelectionValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWeaponForSelectedDefender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyDefenders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSchematicItemDefinition* GetSourceSchematic(const UFortWorldItemDefinition* ItemDefUsedForCrafting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAIPawn* GetSelectedDefenderPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItem* GetDefenderPawnWeaponItem(const AFortAIPawn* DefenderPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetCompatibleAmmoDef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItem* GetCompatibleAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCountFromPlayer(const UFortWorldItemDefinition* AmmoItemDef) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCountFromDefender(const UFortWorldItemDefinition* AmmoItemDef) const;
    
};

