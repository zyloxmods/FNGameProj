#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortItemQuantityPair.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortAlterationModScreenBase.generated.h"

class UFortAlterableItem;
class UFortAlterationModOptinScreenBase;
class UFortAlterationOption;
class UFortAlterationOptionsBase;
class UFortAlterationsWidget;
class UFortItemDetailsHostPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAlterationModScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAlterationsWidget* AlterationsToEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAlterationOptionsBase* AlterationSlotOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemDetailsHostPanel* ItemInspectionMainItemDetailsHostPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemDetailsHostPanel* AlterationsExtraDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackInputAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortAlterableItem> AlterableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAlterationOption* CurrentAlterationOptionInternal;
    
public:
    UFortAlterationModScreenBase();
    UFUNCTION(BlueprintCallable)
    void SetItemForAlterationsModding(UFortAlterableItem* InAlterableItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshItemAndAlterationsBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSlotChanged(bool SelectedSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlterationOptionChanged(UFortAlterationOption* CurrentAlterationOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlterationModificationSucess(int32 ModifiedSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlterationModificationStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlterationModificationCompleted();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleBackAction(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConfirmSelection();
    
    UFUNCTION(BlueprintCallable)
    void CancelSelection();
    
    UFUNCTION(BlueprintCallable)
    bool AreIngredientRequirementsMent(const TArray<FFortItemQuantityPair>& RequiredIngredients);
    
};

