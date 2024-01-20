#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
//#include "AnimationSharingInstances.h" excluded for s7 project should be uncommented on s9 branch since plugin doesnt exist
#include "FortAnimSharingStateInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAnimSharingStateInstance : public UAnimInstance/* public UAnimSharingStateInstance*/ {
    GENERATED_BODY()
public:
    UFortAnimSharingStateInstance();
};

