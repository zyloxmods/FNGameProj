#pragma once
#include "CoreMinimal.h"
#include "AnimationSharingInstances.h"
#include "FortAnimSharingStateInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAnimSharingStateInstance : public UAnimSharingStateInstance {
    GENERATED_BODY()
public:
    UFortAnimSharingStateInstance();
};

