#pragma once
#include "CoreMinimal.h"
#include "AthenaItemShopSection_Storefront.h"
#include "ItemShopCurrencyDislayData.h"
#include "AthenaItemShopSection_MixedCurrencyStorefront.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSection_MixedCurrencyStorefront : public UAthenaItemShopSection_Storefront {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemShopCurrencyDislayData> CurrencyDisplayDataList;
    
public:
    UAthenaItemShopSection_MixedCurrencyStorefront();
};

