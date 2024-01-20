#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortClientEventInterface.h"
#include "PopulatePrerollOffersCallbackDelegate.h"
#include "FortStoreRootBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreRootBase : public UCommonActivatablePanel, public IFortClientEventInterface {
    GENERATED_BODY()
public:
    UFortStoreRootBase();
    UFUNCTION(BlueprintCallable)
    void PopulatePrerollOffers(const FPopulatePrerollOffersCallback& Callback);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, const FText& CurrencyMessageLocText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAffiliateUpdated(const FString& AffiliateName);
    
    
    // Fix for true pure virtual functions not being implemented
};

