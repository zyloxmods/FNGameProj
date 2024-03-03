#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PurchasedItemInfo.h"
#include "FortStoreFrontOfferDetailsWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "FortRealMoneyOfferDetails.generated.h"

class UCommonButton;
class UEnableMultiFactorModal;
class UFortGiftingScreen;
class UOverlay;
class UScrollBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortRealMoneyOfferDetails : public UFortStoreFrontOfferDetailsWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UndoAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PurchaseAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle VBuckAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ReloadMtxAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGiftingScreen> GiftingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnableMultiFactorModal> MFAModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortStoreFrontOfferDetailsWidgetBase> ItemInspectScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Purchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SendGift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Inspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MobileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MTX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_SimpleMTXDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_MobileCloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Details;
    
public:
    UFortRealMoneyOfferDetails();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPurchasedOverlay(int32 QuantityPurchased, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPurchaseConfirmation();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetVBuckActionOnPurchaseButton();
    
    UFUNCTION(BlueprintCallable)
    void SetPurchaseActionOnPurchaseButton();
    
    UFUNCTION(BlueprintCallable)
    void SetCanPurchase(bool bInCanPurchase);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendGift();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetPurchaseButtonText();
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestMtxPurchase();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSendGiftComplete(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGiftable() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleUndoAction(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMtxPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void HandleBackAction(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DeclineMtxPurchase();
    
    UFUNCTION(BlueprintCallable)
    void ClearActionOnPurchaseButton();
    
};

