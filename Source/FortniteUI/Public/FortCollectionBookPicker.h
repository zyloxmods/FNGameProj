#pragma once
#include "CoreMinimal.h"
#include "FortDialogExternalLatentActionHandle.h"
#include "FortItemManagementMulchPanel.h"
#include "FortItemPickerBase.h"
#include "Templates/SubclassOf.h"
#include "FortCollectionBookPicker.generated.h"

class UFortAccountItem;
class UFortItem;
class UFortMulchConfirmationModalWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookPicker : public UFortItemPickerBase, public IFortItemManagementMulchPanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSlotItemConfirmed, UFortItem*, ItemToSlot, FName, SlotId, FFortDialogExternalLatentActionHandle, LatentActionHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlotItemConfirmed OnSlotItemConfirmationCompleteEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccountItem* CurrentSlottedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMulchConfirmationModalWidget* MulchConfirmationModal;
    
public:
    UFortCollectionBookPicker();
protected:
    UFUNCTION(BlueprintCallable)
    void SlotItemConfirmationComplete(UFortItem* CommittedItem, FFortDialogExternalLatentActionHandle LatentActionHandle);
    
    UFUNCTION(BlueprintCallable)
    void ShowMulchDialogForItem(UFortItem* ItemToMulch);
    
    UFUNCTION(BlueprintCallable)
    void ShowMulchConfirmationModal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollectComplete();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPanelDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPanelActivated();
    
    UFUNCTION(BlueprintCallable)
    void HideMulchConfirmationModal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItem* GetCurrentSlottedItem() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

