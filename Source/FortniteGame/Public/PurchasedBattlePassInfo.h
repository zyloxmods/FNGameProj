#pragma once
#include "CoreMinimal.h"
#include "PurchasedBattlePassInfo.generated.h"

USTRUCT(BlueprintType)
struct FPurchasedBattlePassInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    FORTNITEGAME_API FPurchasedBattlePassInfo();
};

