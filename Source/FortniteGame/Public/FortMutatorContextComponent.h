#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortMutatorContextComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMutatorContextComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFortMutatorContextComponent();
};

