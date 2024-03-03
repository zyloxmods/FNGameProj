#pragma once
#include "CoreMinimal.h"
#include "PurchasedItemInfo.h"
#include "FortStoreFrontOfferDetailsWidgetBase.h"
#include "FortPurchaseOverlayModal.generated.h"

class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPurchaseOverlayModal : public UFortStoreFrontOfferDetailsWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_SuccessfullyPurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_SuccessfullyRefunded;
    
public:
    UFortPurchaseOverlayModal();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowAsRefund() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastItem(int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBundleLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMultipleItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuantityPurchased() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPurchasedItemInfo> GetPurchasedItems() const;
    
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
};

