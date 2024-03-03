#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayCueInterface.h"
#include "FortAnimNotify_GameplayCueState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotify_GameplayCueState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueTag Cue;
    
    UFortAnimNotify_GameplayCueState();
};

