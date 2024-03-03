#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EBodyPartVisibilityGrouping.h"
#include "FortAnimNotifyState_HideBodyPartGrouping.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_HideBodyPartGrouping : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyPartVisibilityGrouping BodyPartVisibilityGrouping;
    
    UFortAnimNotifyState_HideBodyPartGrouping();
};

