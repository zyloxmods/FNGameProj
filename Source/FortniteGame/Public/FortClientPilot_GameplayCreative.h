#pragma once
#include "CoreMinimal.h"
#include "FortClientPilot_GameplayBase.h"
#include "FortClientPilot_GameplayCreative.generated.h"

UCLASS(Blueprintable)
class UFortClientPilot_GameplayCreative : public UFortClientPilot_GameplayBase {
    GENERATED_BODY()
public:
    UFortClientPilot_GameplayCreative();
    UFUNCTION(BlueprintCallable)
    void IslandCreationCompleted(bool bSuccess, const FText& Reason);
    
};

