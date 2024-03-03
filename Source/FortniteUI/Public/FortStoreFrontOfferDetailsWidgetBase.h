#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortItemQuantityPair.h"
#include "FortPublicAccountInfo.h"
#include "OnPurchaseOfferCompleteDelegate.h"
#include "PurchasedItemInfo.h"
#include "GameplayTagContainer.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "FortHUDShutdownTimerInterface.h"
#include "PurchaseChoiceRequesterInterface.h"
#include "Templates/SubclassOf.h"
#include "FortStoreFrontOfferDetailsWidgetBase.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortAthenaReward;
class UFortItem;
class UFortItemDefinition;
class UFortMtxStoreRootBase;
class UFortProgressModal;
class UFortPurchaseOverlayModal;
class UFortStoreFrontOfferInfo;
class UFortVariantPicker;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class FORTNITEUI_API UFortStoreFrontOfferDetailsWidgetBase : public UFortActivatablePanelWithItemPreview, public IFortHUDShutdownTimerInterface, public IPurchaseChoiceRequesterInterface {
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
    UCommonTextBlock* Text_UndoBottomBarWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Undo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CosmeticWarning;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortProgressModal> ProgressModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPurchaseOverlayModal> PurchaseModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortProgressModal* ProgressModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* ItemToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* SecondaryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenVariantsRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenVariants;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRefundWarningWhileMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRefundWarningWhileInZone;
    
public:
    UFortStoreFrontOfferDetailsWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemViewModeBP();
    
    UFUNCTION(BlueprintCallable)
    void ShowVaultItemFromItemReward(UFortAthenaReward* InItemReward);
    
    UFUNCTION(BlueprintCallable)
    void ShowVaultItem(const UFortItem* InItemToRepresent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUndoInBottomBar();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowPurchasedOverlayWidget(int32 QuantityPurchased, const TArray<FPurchasedItemInfo> PurchasedItems, bool bShowAsRefund, const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void ShowItemPresentationScreen(const TArray<FPurchasedItemInfo>& PurchasedItems);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldShowReloadVBucks();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldShowDynamicReloadVBucks();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHavePurchaseConfirmation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayOfferPurchasedOverlay() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupOffer(UFortStoreFrontOfferInfo* InOfferData);
    
    UFUNCTION(BlueprintCallable)
    void SetStoreRoot(UFortMtxStoreRootBase* InStoreRoot);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldAllowItemViewModeAction(const bool Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSecondaryItem(const UFortItem* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPagedItems(const TArray<UFortStoreFrontOfferInfo*>& InPagedItems);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetItemRewardSecondaryItem(const UFortItemDefinition* ItemDef, TArray<FFortItemQuantityPair> AllItemQuantityPairs, UFortAthenaReward* RewardWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsInItemViewMode(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendUndoMtxReturnedAnalytic(const FString& Interaction, const FString& PurchaseId, const int32 MtxReturned) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendShopInteractionAnalytic(const FString& Interaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendSeasonPassInteractionAnalytic(const FString& Interaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendReloadMtxPurchaseSKUAnalytic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendRealMoneyStoreInteractionAnalytic(const FString& Interaction) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendRealMoneyPurchase(int32 PriceIndex, int32 Quantity);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendingToMainStore();
    
    UFUNCTION(BlueprintCallable)
    void RequestExternalPurchase(int32 PriceIndex, int32 Quantity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterItemRewardInteraction(UFortAthenaReward* InItemReward);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshUndoState(UFortStoreFrontOfferInfo* OfferPurchased);
    
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
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVariantChanged(FGameplayTag VariantChannel, FGameplayTag VariantTag, const FString& VariantCustomData, bool IsOwned);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStatus();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchasingStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterViewModeActionCommitted(bool& PassThrough);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideUndoInBottomBar();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleVaultItemsViewed(const TArray<UFortItem*>& ItemsShown);
    
    UFUNCTION(BlueprintCallable)
    void HandleReloadStaticMtxClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleReloadDynamicMtxClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRealMoneyPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems);
    
    UFUNCTION(BlueprintCallable)
    void HandleGiftingItemPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleBattlePassPurchaseComplete(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetPriceIndexToShow();
    
public:
    UFUNCTION(BlueprintCallable)
    UFortStoreFrontOfferInfo* GetOfferInfoById(const FString& OfferId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortStoreFrontOfferInfo* GetOfferInfo() const;
    
    UFUNCTION(BlueprintCallable)
    static bool FindItemQuantityPair(UFortItemDefinition* ItemDefinition, UPARAM(Ref) TArray<FFortItemQuantityPair>& InItemQuantityPairs, FFortItemQuantityPair& OutItemQuantity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateUndoButton();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmUndo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOfferSet();
    
    
    // Fix for true pure virtual functions not being implemented
};

