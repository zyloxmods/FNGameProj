#pragma once
#include "CoreMinimal.h"
#include "ConditionalFoundationQuotaTier.h"
#include "ConditionalFoundationQuota.generated.h"

USTRUCT(BlueprintType)
struct FConditionalFoundationQuota {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalFoundationQuotaTier> Tiers;
    
    FORTNITEGAME_API FConditionalFoundationQuota();
};

