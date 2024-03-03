#pragma once
#include "CoreMinimal.h"
#include "ObjectInteractionBehavior.h"
#include "MoveBuildingsOnGrid.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoveBuildingsOnGrid : public UObjectInteractionBehavior {
    GENERATED_BODY()
public:
    UMoveBuildingsOnGrid();
};

