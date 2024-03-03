#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFortAppliedSwapItemAndVariantState.h"
#include "FortSwapItemAndVariantData.h"
#include "FortAnimNotify_SwapEquippedItem.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_SwapEquippedItem : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SwapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSwapItemAndVariantData> SwapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAppliedSwapItemAndVariantState ForcedSwapState;
    
    UFortAnimNotify_SwapEquippedItem();
};

