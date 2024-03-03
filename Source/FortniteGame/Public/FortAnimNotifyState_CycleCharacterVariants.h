#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortCosmeticVariantSwapData.h"
#include "FortAnimNotifyState_CycleCharacterVariants.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_CycleCharacterVariants : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticVariantSwapData> TransitionData;
    
public:
    UFortAnimNotifyState_CycleCharacterVariants();
};

