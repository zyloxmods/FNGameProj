#pragma once
#include "CoreMinimal.h"
#include "AthenaItemShopSection.h"
#include "AthenaItemShopSection_Storefront.generated.h"

class UDynamicEntryBox;
class UFortStoreFrontOfferInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSection_Storefront : public UAthenaItemShopSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_OfferEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> OffersToDisplay;
    
public:
    UAthenaItemShopSection_Storefront();
};

