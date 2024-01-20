#pragma once
#include "CoreMinimal.h"
#include "LevelSaveBaseComponent.h"
#include "LevelSaveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API ULevelSaveComponent : public ULevelSaveBaseComponent {
    GENERATED_BODY()
public:
    ULevelSaveComponent();
};

