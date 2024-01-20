#pragma once
#include "CoreMinimal.h"
#include "PurchaseFlowOffer.h"
#include "PurchaseFlowReceiptParam.generated.h"

USTRUCT(BlueprintType)
struct PURCHASEFLOW_API FPurchaseFlowReceiptParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransactionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPurchaseFlowOffer> Offers;
    
    FPurchaseFlowReceiptParam();
};

