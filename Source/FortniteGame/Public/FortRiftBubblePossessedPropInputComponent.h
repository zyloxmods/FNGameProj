#pragma once
#include "CoreMinimal.h"
#include "FortPossessedPropInputComponent.h"
#include "FortRiftBubblePossessedPropInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortRiftBubblePossessedPropInputComponent : public UFortPossessedPropInputComponent {
    GENERATED_BODY()
public:
    UFortRiftBubblePossessedPropInputComponent();
};

