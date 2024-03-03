#pragma once
#include "CoreMinimal.h"
#include "FortEventLevelNavigationBangCheckComponent.h"
#include "FortBangCheckComponent_Map.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBangCheckComponent_Map : public UFortEventLevelNavigationBangCheckComponent {
    GENERATED_BODY()
public:
    UFortBangCheckComponent_Map();
};

