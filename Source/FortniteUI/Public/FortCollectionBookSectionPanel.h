#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Engine/DataTable.h"
#include "FortCollectionBookSlotData.h"
#include "FortDialogExternalLatentActionHandle.h"
#include "ECollectionBookSectionNavTarget.h"
#include "EFortCollectionBookPopupButtonType.h"
#include "OnPreviewXPChangeDelegate.h"
#include "OnSectionCloseRequestDelegate.h"
#include "FortCollectionBookSectionPanel.generated.h"

class UCommonTextBlock;
class UFortAccountItem;
class UFortCollectionBookPicker;
class UFortCollectionBookSection;
class UFortCollectionBookSectionCompletionRewardWidget;
class UFortCollectionBookSlotButton;
class UFortCollectionBookSlotView;
class UFortItem;
class UTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookSectionPanel : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResearchItemAction, UFortItem*, SelectedItem, const FFortCollectionBookSlotData, SlotData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnItemInspectAction, UFortItem*, SelectedItem, bool, EnableItemActions, bool, IsPlaceholderItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemAction, UFortItem*, SelectedItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSectionCloseRequest OnSectionCloseRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewXPChange OnPreviewXPChangeEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* SectionNameTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSlotView* SlotViewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookPicker* SlotItemPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ContextOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ContextTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ItemAcquisitionSourceContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ItemAcquisitionSourceDescWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ItemAcquisitionSourceDesc2Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ResearchRecruitUnslotContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PersonRecruitUnavailableMessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ItemResearchUnavailableMessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* UnslotUnavailableMessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CloseActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SlotItemActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectItemActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectCollectionBookItemActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectPreviewItemActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OpenPickerActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LogAllowedItemsActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ResearchItemActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RecruitActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UnslotItemActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECollectionBookSectionNavTarget CurrentNavTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSection* AssociatedSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSummonedPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAction OnShowItemDetailEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAction OnSlotItemConfirmEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResearchItemAction OnResearchItemConfirmEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAction OnUnslotItemConfirmEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemInspectAction OnInspectItemEvent;
    
public:
    UFortCollectionBookSectionPanel();
private:
    UFUNCTION(BlueprintCallable)
    void OnUnslotItemOperationComplete(const UFortAccountItem* UnslottedItem, const UFortAccountItem* OldSlottedItem, FName SlotId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnslotItemComplete(const UFortItem* UnslottedItem, FName SlotId);
    
    UFUNCTION(BlueprintCallable)
    void OnUnslotItemActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSlottedItemOperationComplete(const UFortAccountItem* SlottedItem, FName SlotId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSlotPickerItemSelected(UFortItem* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotPickerItemHovered(UFortItem* HoveredItem);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotItemConfirmationCompleted(UFortItem* SelectedItem, FName SlotId, FFortDialogExternalLatentActionHandle LatentActionHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotItemComplete(const UFortAccountItem* SlottedItem, FName SlotId);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotItemActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotButtonSelected(const UFortCollectionBookSlotButton* SlotButton);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotButtonHovered(int32 ButtonIx);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSectionChanged(const UFortCollectionBookSection* Section);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResearchItemOperationComplete(const UFortAccountItem* NewItem, const FString& TemplateId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPurchaseItemActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenPickerActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnLogAllowedItemsActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnInspectActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnBackActionExecuted(bool& bPassThrough);
    
};

