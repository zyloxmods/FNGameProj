#pragma once
#include "CoreMinimal.h"
#include "Foliage/Public/ProceduralFoliageComponent.h"
#include "FortProceduralFoliageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Editor, meta=(BlueprintSpawnableComponent))
class UFortProceduralFoliageComponent : public UProceduralFoliageComponent {
    GENERATED_BODY()
public:
    UFortProceduralFoliageComponent();
};

