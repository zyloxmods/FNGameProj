#pragma once
#include "CoreMinimal.h"
#include "FortHiddenRewardQuantityPair.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortHiddenRewardQuantityPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FFortHiddenRewardQuantityPair();
};

