#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontOfferWidgetBase.h"
#include "FortLlamaStoreOfferWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLlamaStoreOfferWidgetBase : public UFortStoreFrontOfferWidgetBase {
    GENERATED_BODY()
public:
    UFortLlamaStoreOfferWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpgradingFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpgradeRarity(int32 RarityToUpgradeTo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SilverUpgradeFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowRarity(int32 Rarity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowInitialRarityState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHovered();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestToInspect();
    
    UFUNCTION(BlueprintCallable)
    void RequestPurchase(int32 PriceIndex, int32 Quantity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferShown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadInFinished();
    
    UFUNCTION(BlueprintCallable)
    bool IsParentActivatablePanelActive();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPriceIndexToShow();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentRarity();
    
};

