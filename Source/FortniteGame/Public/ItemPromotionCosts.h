#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortItemQuantityPair.h"
#include "ItemPromotionCosts.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FItemPromotionCosts : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> PromotionCosts;
    
    FItemPromotionCosts();
};

