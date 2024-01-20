#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortAnimNotifyState_AllowBlockedActions.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_AllowBlockedActions : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UFortAnimNotifyState_AllowBlockedActions();
};

