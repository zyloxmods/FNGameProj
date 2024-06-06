#pragma once
#include "CoreMinimal.h"
#include "FortMontageItemDefinitionBase.h"
#include "AthenaVictoryPoseItemDefinition.generated.h"

UCLASS(Blueprintable)
class UAthenaVictoryPoseItemDefinition : public UFortMontageItemDefinitionBase {
    GENERATED_BODY()
public:
    UAthenaVictoryPoseItemDefinition(const FObjectInitializer& ObjectInitializer);
};

