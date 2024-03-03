#pragma once
#include "CoreMinimal.h"
#include "LevelSaveBaseComponent.h"
#include "LevelSaveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULevelSaveComponent : public ULevelSaveBaseComponent {
    GENERATED_BODY()
public:
    ULevelSaveComponent();
};

