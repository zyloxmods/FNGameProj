#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PurchasedItemInfo.h"
#include "GameplayTagContainer.h"
#include "FortItemPreviewScreen.h"
#include "FortSeasonLevelConfirmationScreen.generated.h"

class UBacchusCloseButton;
class UCommonButton;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UDynamicEntryBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSeasonLevelConfirmationScreen : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CloseScreenRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag SpatialCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBacchusCloseButton* Mobile_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_IncreasePurchaseTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_DecreasePurchaseTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PurchasePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_RewardIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Purchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_Purchasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_PurchaseState;
    
public:
    UFortSeasonLevelConfirmationScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetsRefreshed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void HandleCloseScreen(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordTierPurchase() const;
    
};

