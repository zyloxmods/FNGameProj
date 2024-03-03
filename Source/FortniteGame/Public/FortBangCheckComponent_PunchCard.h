#pragma once
#include "CoreMinimal.h"
#include "FortEventLevelNavigationBangCheckComponent.h"
#include "FortBangCheckComponent_PunchCard.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBangCheckComponent_PunchCard : public UFortEventLevelNavigationBangCheckComponent {
    GENERATED_BODY()
public:
    UFortBangCheckComponent_PunchCard();
};

