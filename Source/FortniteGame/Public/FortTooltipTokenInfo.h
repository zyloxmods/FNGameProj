#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTokenContextInfo.h"
#include "FortTooltipTokenInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortTooltipTokenInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTokenContextInfo> ContextDetails;
    
    FORTNITEGAME_API FFortTooltipTokenInfo();
};

