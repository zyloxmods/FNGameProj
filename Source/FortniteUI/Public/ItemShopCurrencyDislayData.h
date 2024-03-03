#pragma once
#include "CoreMinimal.h"
#include "EStoreCurrencyType.h"
#include "Templates/SubclassOf.h"
#include "ItemShopCurrencyDislayData.generated.h"

class UFortStoreFrontOfferWidgetBase;

USTRUCT(BlueprintType)
struct FItemShopCurrencyDislayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStoreCurrencyType::Type> CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortStoreFrontOfferWidgetBase> OfferTileClass;
    
    FORTNITEUI_API FItemShopCurrencyDislayData();
};

