#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_BattleBus.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_BattleBus : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_BattleBus();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydiving();
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

