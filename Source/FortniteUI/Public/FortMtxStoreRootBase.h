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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMtxStoreSelectionPopup* MtxStoreSelectionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMtxStoreSelectionPopup> MtxStoreSelectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StorefrontNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> AcquisitionOfferData;
    
public:
    UFortMtxStoreRootBase();
    UFUNCTION(BlueprintCallable)
    void SetStorefrontNames(const TArray<FString>& InStorefrontNames);
    
    UFUNCTION(BlueprintCallable)
    void PushStoreSelection();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, const FText& CurrencyMessageLocText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartReadingOffers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchasingDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOffersGenerated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NoOffersAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMtxBreakdown GetMtxBreakdown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateOfferWidget(UFortStoreFrontOfferInfo* OfferData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearOfferWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreOffersLoaded() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

