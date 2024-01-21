#pragma once
#include "CoreMinimal.h"
#include "FortDepositedResources.generated.h"

USTRUCT(BlueprintType)
struct FFortDepositedResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FORTNITEGAME_API FFortDepositedResources();
};

