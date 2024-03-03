#pragma once
#include "CoreMinimal.h"
#include "FortAIPerceptionComponent.h"
#include "AthenaAIPerceptionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAthenaAIPerceptionComponent : public UFortAIPerceptionComponent {
    GENERATED_BODY()
public:
    UAthenaAIPerceptionComponent();
};

