#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortPublicAccountInfo.h"
#include "OnPurchaseOfferCompleteDelegate.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "Templates/SubclassOf.h"
#include "FortStoreFrontOfferDetailsWidgetBase.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortStoreFrontOfferInfo;
class UFortUndoCompletionWidget;
class UFortVariantPicker;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreFrontOfferDetailsWidgetBase : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EnterViewModeInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInItemViewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldAllowItemViewModeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediatelyPurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> PagedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantPicker* Picker_VariantSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextUndoAvailability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* UndoButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortUndoCompletionWidget> UndoCompletionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortUndoCompletionWidget* UndoCompletionWidget;
    
public:
    UFortStoreFrontOfferDetailsWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemViewModeBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHavePurchaseConfirmation() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupOffer(UFortStoreFrontOfferInfo* InOfferData);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldAllowItemViewModeAction(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPagedItems(const TArray<UFortStoreFrontOfferInfo*>& InPagedItems);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInItemViewMode(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendUndoMtxReturnedAnalytic(const FString& Interaction, const int32 MtxReturned) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendShopInteractionAnalytic(const FString& Interaction) const;
    
    UFUNCTION(BlueprintCallable)
    void RequestExternalPurchase(int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    void RefreshUndoState();
    
    UFUNCTION(BlueprintCallable)
    void RefreshOfferInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PurchaseOffer(const FOnPurchaseOfferComplete& Callback, int32 Quantity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PurchaseAmountRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PurchaseAmountLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferSet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnterViewModeActionCommitted(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortStoreFrontOfferInfo* GetOfferInfo() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConfirmUndo();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanAutoEquip();
    
    UFUNCTION(BlueprintCallable)
    void AutoEquip();
    
};

