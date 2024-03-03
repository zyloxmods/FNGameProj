#pragma once
#include "CoreMinimal.h"
#include "OverlapComponent.h"
#include "ComplexPawnOverlapComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UComplexPawnOverlapComponent : public UOverlapComponent {
    GENERATED_BODY()
public:
    UComplexPawnOverlapComponent();
};

