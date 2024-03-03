#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCosmeticModification.h"
#include "FortConditionalCosmeticModification.generated.h"

USTRUCT(BlueprintType)
struct FFortConditionalCosmeticModification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCosmeticModification CosmeticModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ConditionalTags;
    
    FORTNITEGAME_API FFortConditionalCosmeticModification();
};

