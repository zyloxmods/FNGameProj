#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontOfferWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "FortRealMoneyOffer.generated.h"

class UFortDirectAcquisitionOfferDetailsWidget;
class UFortPurchaseUnavailableModal;
class UFortRealMoneyOfferDetails;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRealMoneyOffer : public UFortStoreFrontOfferWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPurchaseUnavailableModal> PurchaseUnavailableModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDirectAcquisitionOfferDetailsWidget> ItemPreviewDetailsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortRealMoneyOfferDetails> RealMoneyDetailsClass;
    
public:
    UFortRealMoneyOffer();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStorePrice(const FText& InStorePrice);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const;
    
};

