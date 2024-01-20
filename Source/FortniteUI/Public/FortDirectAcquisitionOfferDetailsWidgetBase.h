#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortPublicAccountInfo.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "FortDirectAcquisitionOfferDetailsWidgetBase.generated.h"

class UFortStoreFrontOfferInfo;
class UFortVariantPicker;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDirectAcquisitionOfferDetailsWidgetBase : public UFortActivatablePanelWithItemPreview {
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
    TArray<UFortStoreFrontOfferInfo*> PagedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantPicker* Picker_VariantSelector;
    
public:
    UFortDirectAcquisitionOfferDetailsWidgetBase();
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
    void SendShopInteractionAnalytic(const FString& Interaction) const;
    
    UFUNCTION(BlueprintCallable)
    void RefreshOfferInfo();
    
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
    
    UFUNCTION(BlueprintCallable)
    bool CanAutoEquip();
    
    UFUNCTION(BlueprintCallable)
    void AutoEquip();
    
};

