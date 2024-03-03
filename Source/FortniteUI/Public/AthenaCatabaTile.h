#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontOfferWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "AthenaCatabaTile.generated.h"

class UFortDirectAcquisitionOfferDetailsWidget;
class UFortPurchaseUnavailableModal;
class UFortRealMoneyOfferDetails;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCatabaTile : public UFortStoreFrontOfferWidgetBase {
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
    UAthenaCatabaTile();
};

