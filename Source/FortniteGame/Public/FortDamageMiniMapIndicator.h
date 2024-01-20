#pragma once
#include "CoreMinimal.h"
#include "FortMiniMapPingIndicator.h"
#include "FortDamageMiniMapIndicator.generated.h"

UCLASS(Blueprintable)
class UFortDamageMiniMapIndicator : public UFortMiniMapPingIndicator {
    GENERATED_BODY()
public:
    UFortDamageMiniMapIndicator();
};

