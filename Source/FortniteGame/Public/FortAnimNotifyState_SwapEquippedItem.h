#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EFortAppliedSwapItemAndVariantState.h"
#include "FortSwapItemAndVariantData.h"
#include "FortAnimNotifyState_SwapEquippedItem.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_SwapEquippedItem : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SwapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSwapItemAndVariantData> SwapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAppliedSwapItemAndVariantState ForcedSwapState;
    
    UFortAnimNotifyState_SwapEquippedItem();
};

