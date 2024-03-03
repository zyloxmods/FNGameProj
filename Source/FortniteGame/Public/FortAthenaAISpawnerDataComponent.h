#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaAISpawnerDataComponent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortAthenaAISpawnerDataComponent : public UObject {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent();
};

