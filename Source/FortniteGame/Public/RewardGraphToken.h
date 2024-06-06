#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantPreview.h"
#include "FortTokenType.h"
#include "RewardGraphToken.generated.h"

class UAthenaCosmeticItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class URewardGraphToken : public UFortTokenType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaCosmeticItemDefinition> PrimaryCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticVariantPreview> ItemVariantPreviews;
    
public:
    URewardGraphToken(const FObjectInitializer& ObjectInitializer);
};

