#pragma once
#include "CoreMinimal.h"
#include "ChosenQuotaInfo.generated.h"

USTRUCT(BlueprintType)
struct FChosenQuotaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootTierKey;
    
    FORTNITEGAME_API FChosenQuotaInfo();
};

