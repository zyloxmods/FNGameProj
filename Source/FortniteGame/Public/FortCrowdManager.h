#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdManager.h"
#include "FortCrowdManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortCrowdManager : public UCrowdManager {
    GENERATED_BODY()
public:
    UFortCrowdManager();
};

