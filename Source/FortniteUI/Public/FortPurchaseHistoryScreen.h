#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Engine/DataTable.h"
#include "MtxPurchaseHistory.h"
#include "EPurchaseReturnStep.h"
#include "Templates/SubclassOf.h"
#include "FortPurchaseHistoryScreen.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonListView;
class UCommonTextBlock;
class UFortItemDefinition;
class UFortPurchaseHistoryListView;
class UFortRefundConfirmation;
class UFortRichTextBlockLegacy;
class UReturnReasonDataWrapper;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPurchaseHistoryScreen : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousStepRowHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortRefundConfirmation> RefundConfirmationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortRefundConfirmation* RefundConfirmationWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ReturnReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReturnReasonDataWrapper*> WrapperArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> SelectedItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefundConfirmationProcessing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPurchaseHistoryListView* ListView_Purchases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Reasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RefundCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_RequestRefund;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRichTextBlockLegacy* RichText_WarningMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RefundValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RefundReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_ItemsToReturn;
    
public:
    UFortPurchaseHistoryScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemList(const TArray<UCommonTextBlock*>& ItemsToReturn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopulateView(EPurchaseReturnStep CurrentStep);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenSubmitRequest(bool bIsSelectionTokenlessRefundable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoPurchasesAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRefresh(FMtxPurchaseHistory PurchaseHistory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndRefundSubmission(bool bSuccess, int32 MtxRefunded, const FText& CombinedDisplayNames, int32 TicketIndex, bool WasFreeRefund);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginRefundSubmission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeTickets(int32 NumTicketsAvailableToUse);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTabButtonClicked(EPurchaseReturnStep ClickedStep);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviousStepAction(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPurchaseReturnStep GetCurrentStep() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeComplete();
    
};

