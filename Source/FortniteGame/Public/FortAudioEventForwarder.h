#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAthenaGamePhase.h"
#include "FortAudioEventForwarder.generated.h"

UCLASS(Blueprintable, Within=FortAthenaMutator_GameModeBase)
class UFortAudioEventForwarder : public UObject {
    GENERATED_BODY()
public:
    UFortAudioEventForwarder();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};

