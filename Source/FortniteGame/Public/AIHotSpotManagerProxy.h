#pragma once
#include "CoreMinimal.h"
#include "HotSpots/AIHotSpotManager.h"
#include "AIHotSpotManagerProxy.generated.h"

UCLASS(Blueprintable)
class UAIHotSpotManagerProxy : public UAIHotSpotManager {
    GENERATED_BODY()
public:
    UAIHotSpotManagerProxy();
};

