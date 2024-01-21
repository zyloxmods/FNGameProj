#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "FortGlobalActionDetailsFunctionContext.generated.h"

USTRUCT(BlueprintType)
struct FFortGlobalActionDetailsFunctionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType OverrideInputType;
    
    FORTNITEGAME_API FFortGlobalActionDetailsFunctionContext();
};

