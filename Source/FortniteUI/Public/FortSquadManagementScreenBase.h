#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HomebaseSquad.h"
#include "AttributeSet.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortSquadManagementScreenBase.generated.h"

class UFortDisableAutoSlottingPromptAction;
class UFortItem;
class UFortItemViewContext_SquadSlotItemPicker;
class UFortItemViewContext_SquadSlotsView;
class UFortSquadSlotDetailsPanel;
class UFortSquadSlotItemPicker;
class UFortSquadSlotsView;
class UFortSquadStatsWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadManagementScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadOnlyModeWIFE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadStatsWidgetBase* SquadStatsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotsView* SquadSlotsView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotDetailsPanel* SelectedSlotDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotItemPicker* SelectedSlotItemPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ManageInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InventoryInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InventoryCloseInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ClosePickerInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SelectPickerSlotActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CyclePickerSortActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousSquadActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextSquadActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ClearAllActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle HelpScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDisableAutoSlottingPromptAction> DisableAutoSlottingToClearSquadPromptAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemViewContext_SquadSlotsView* ItemViewContext_SquadSlotsView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemViewContext_SquadSlotItemPicker* ItemViewContext_SquadSlotItemPicker;
    
public:
    UFortSquadManagementScreenBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetSquadTeamAttribute(FGameplayAttribute& OutGameplayAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetSquadMainAttribute(FGameplayAttribute& OutGameplayAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetAttributeValueFromSquad(float& OutValue, const FGameplayAttribute& Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWarningReadOnlyWIFE(bool Force);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupInputHandlers();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadToManageBP(const FName SquadId);
    
    UFUNCTION(BlueprintCallable)
    void SelectSquadWithOffset(int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousSquad();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextSquad();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToSquadSlot(int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenWIFE() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleViewInAll(const int32 SquadSlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadSlotPickerShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadSlotPickerHidden();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleShouldAutoSlotSurvivorSquadsChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleSelectPickerSlotInputAction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreviousSquadInputAction();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePickerSelectionCommitted(UFortItem* CommittedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandlePickerSelectionChanged(UFortItem* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleOpenSquadSlot(const int32 SquadSlotIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNextSquadInputAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleManageInputAction();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryInputAction();
    
    UFUNCTION(BlueprintCallable)
    void HandleInspectInputAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentSquadSetBP();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCyclePickerSortInputAction();
    
    UFUNCTION(BlueprintCallable)
    void HandleClosePickerInputAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBackInputAction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumUnlockedSquads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIdOfSquadToManageBP() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSquad();
    
};

