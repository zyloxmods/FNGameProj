#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontOfferInfo.h"
#include "FortCatabaStoreFrontOfferInfo.generated.h"

class UFortShopOfferDisplayData;

UCLASS(Blueprintable)
class UFortCatabaStoreFrontOfferInfo : public UFortStoreFrontOfferInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortShopOfferDisplayData* CatabaDisplayAsset;
    
public:
    UFortCatabaStoreFrontOfferInfo();
};

