#pragma once
#include "CoreMinimal.h"
#include "FortEventLevelNavigationBangCheckComponent.h"
#include "FortBangCheckComponent_Faction.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBangCheckComponent_Faction : public UFortEventLevelNavigationBangCheckComponent {
    GENERATED_BODY()
public:
    UFortBangCheckComponent_Faction();
};

