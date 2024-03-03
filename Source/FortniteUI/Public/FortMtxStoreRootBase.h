#pragma once
#include "CoreMinimal.h"
#include "FortClientEventInterface.h"
#include "MtxBreakdown.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortMtxStoreRootBase.generated.h"

class UFortMtxStoreSelectionPopup;
class UFortStoreFrontOfferInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMtxStoreRootBase : public UFortActivatablePanel, public IFortClientEventInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMtxStoreSelectionPopup* MtxStoreSelectionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMtxStoreSelectionPopup> MtxStoreSelectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> AcquisitionOfferData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StorefrontNames;
    
public:
    UFortMtxStoreRootBase();
    UFUNCTION(BlueprintCallable)
    void SetStorefrontNames(const TArray<FString>& InStorefrontNames);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PushStoreSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, const FText& CurrencyMessageLocText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartReadingOffers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchasingDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOffersGenerated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NoOffersAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStorefrontNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMtxBreakdown GetMtxBreakdown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateOfferWidget(UFortStoreFrontOfferInfo* OfferData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearOfferWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreOffersLoaded() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

