#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FortMapLocationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMapLocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UFortMapLocationComponent();
};

