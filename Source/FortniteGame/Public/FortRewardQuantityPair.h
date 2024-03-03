#pragma once
#include "CoreMinimal.h"
#include "FortRewardQuantityPair.generated.h"

USTRUCT(BlueprintType)
struct FFortRewardQuantityPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FORTNITEGAME_API FFortRewardQuantityPair();
};

