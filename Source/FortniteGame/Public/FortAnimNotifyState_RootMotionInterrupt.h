#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EMontageInterrupt.h"
#include "FortAnimNotifyState_RootMotionInterrupt.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_RootMotionInterrupt : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMontageInterrupt::Type> MontageInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowMoveInput: 1;
    
    UFortAnimNotifyState_RootMotionInterrupt();
};

