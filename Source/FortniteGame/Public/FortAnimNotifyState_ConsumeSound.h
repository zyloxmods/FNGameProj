#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortAnimNotifyState_ConsumeSound.generated.h"

class USoundBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_ConsumeSound : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ConsumeUseSound;
    
    UFortAnimNotifyState_ConsumeSound();
};

