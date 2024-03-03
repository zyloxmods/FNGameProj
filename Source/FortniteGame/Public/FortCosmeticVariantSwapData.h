#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantTransition.h"
#include "FortCosmeticVariantSwapData.generated.h"

class UAthenaCosmeticItemDefinition;

USTRUCT(BlueprintType)
struct FFortCosmeticVariantSwapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaCosmeticItemDefinition> ItemToManage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticVariantTransition> Transitions;
    
    FORTNITEGAME_API FFortCosmeticVariantSwapData();
};

