#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PurchasedItemInfo.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "AthenaItemShopScreen.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortAffilateModal;
class UFortMtxStoreSelectionPopup;
class UHorizontalBox;
class UInvalidationBox;
class UScrollBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UAthenaItemShopScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAvailableMTXBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OpenMTXStoreAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentScrollOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextCategoryInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrevCategoryInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AffiliateInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAffilateModal> AffiliateModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMtxStoreSelectionPopup> StoreSelectionPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAffilateModal* AffiliateModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMtxStoreSelectionPopup* StoreSelectionPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AffiliateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvalidationBox* InvalidationBox_ItemShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_SectionTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_AvailableAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_OfferMessage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOfferMessage;
    
public:
    UAthenaItemShopScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void ResumeInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSectionsEstablished(bool bEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEstablishingSections();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx);
    
    UFUNCTION(BlueprintCallable)
    void HandleTabClicked(UCommonButton* TabButton, int32 TabIdx);
    
    UFUNCTION(BlueprintCallable)
    void HandlePurchaseOfferComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems);
    
    UFUNCTION(BlueprintCallable)
    void HandlePrevCategoryAction(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleOfferSeenInDetails(const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void HandleNextCategoryAction(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleDonutSequenceStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleDonuteShopForceSetup();
    
    UFUNCTION(BlueprintCallable)
    void HandleCarouselOfferChanged(const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void HandleAffiliateAction(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSetupForDonutSequence(bool bEventEnabled);
    
    UFUNCTION(BlueprintCallable)
    void BPRequestFocusSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPPlayDonutAnimation();
    
};

