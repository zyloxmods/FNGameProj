#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortHarvestingToolMontageOverrideData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortHarvestingToolMontageOverrideData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CosmeticTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MontageToPlay;
    
public:
    FFortHarvestingToolMontageOverrideData();
};

