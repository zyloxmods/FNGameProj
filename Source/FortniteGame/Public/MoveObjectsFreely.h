#pragma once
#include "CoreMinimal.h"
#include "ObjectInteractionBehavior.h"
#include "MoveObjectsFreely.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UMoveObjectsFreely : public UObjectInteractionBehavior {
    GENERATED_BODY()
public:
    UMoveObjectsFreely();
};

