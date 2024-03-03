#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "FortItemQuantityPair.h"
#include "FortCollectionBookDirectPurchaseData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCollectionBookDirectPurchaseData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> PurchaseCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PurchaseCatalysts;
    
    FFortCollectionBookDirectPurchaseData();
};

