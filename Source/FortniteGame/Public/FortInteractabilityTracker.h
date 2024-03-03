#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortInteractabilityTracker.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortInteractabilityTracker : public UObject {
    GENERATED_BODY()
public:
    UFortInteractabilityTracker();
};

