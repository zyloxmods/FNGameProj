#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FortCosmeticVariantSwapData.h"
#include "FortAnimNotify_CycleCharacterVariants.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_CycleCharacterVariants : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticVariantSwapData> TransitionData;
    
public:
    UFortAnimNotify_CycleCharacterVariants();
};

