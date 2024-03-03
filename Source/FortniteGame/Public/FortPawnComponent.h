#pragma once
#include "CoreMinimal.h"
#include "PawnComponent.h"
#include "FortPawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPawnComponent : public UPawnComponent {
    GENERATED_BODY()
public:
    UFortPawnComponent();
};

