#pragma once
#include "CoreMinimal.h"
#include "MtxPurchaseHistoryEntry.h"
#include "MtxPurchaseHistory.generated.h"

USTRUCT(BlueprintType)
struct FMtxPurchaseHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMtxPurchaseHistoryEntry> Purchases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefundCredits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefundsUsed;
    
    FORTNITEGAME_API FMtxPurchaseHistory();
};

