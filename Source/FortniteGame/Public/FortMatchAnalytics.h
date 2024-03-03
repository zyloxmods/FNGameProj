#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAthenaGamePhase.h"
#include "FortMatchAnalytics.generated.h"

UCLASS(Blueprintable)
class UFortMatchAnalytics : public UObject {
    GENERATED_BODY()
public:
    UFortMatchAnalytics();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase Phase);
    
};

