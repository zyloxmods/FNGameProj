#pragma once
#include "CoreMinimal.h"
#include "PurchaseFlowItem.h"
#include "PurchaseFlowOffer.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseFlowOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfferNamespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPurchaseFlowItem> Items;
    
    PURCHASEFLOW_API FPurchaseFlowOffer();
};

