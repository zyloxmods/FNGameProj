#pragma once
#include "CoreMinimal.h"
#include "ObjectInteractionBehavior.h"
#include "MoveBuildingsOnGrid.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UMoveBuildingsOnGrid : public UObjectInteractionBehavior {
    GENERATED_BODY()
public:
    UMoveBuildingsOnGrid();
};

