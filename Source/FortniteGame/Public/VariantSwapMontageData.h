#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VariantSwapMontageData.generated.h"

USTRUCT(BlueprintType)
struct FVariantSwapMontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantMetaTagRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageSectionName;
    
    FORTNITEGAME_API FVariantSwapMontageData();
};

