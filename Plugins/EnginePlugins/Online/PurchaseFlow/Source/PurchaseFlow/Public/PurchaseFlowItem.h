#pragma once
#include "CoreMinimal.h"
#include "PurchaseFlowItem.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseFlowItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValidationInfo;
    
    PURCHASEFLOW_API FPurchaseFlowItem();
};

