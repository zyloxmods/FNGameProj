#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortProceduralCatalogCostPriceFactor.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortProceduralCatalogCostPriceFactor : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriceFactor;
    
public:
    FFortProceduralCatalogCostPriceFactor();
};

