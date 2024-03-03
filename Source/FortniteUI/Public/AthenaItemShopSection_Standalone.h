#pragma once
#include "CoreMinimal.h"
#include "AthenaItemShopSection_Storefront.h"
#include "Templates/SubclassOf.h"
#include "AthenaItemShopSection_Standalone.generated.h"

class UFortStandaloneModalPopup;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSection_Standalone : public UAthenaItemShopSection_Storefront {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortStandaloneModalPopup> StandaloneModalPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StandaloneStorefrontName;
    
public:
    UAthenaItemShopSection_Standalone();
};

