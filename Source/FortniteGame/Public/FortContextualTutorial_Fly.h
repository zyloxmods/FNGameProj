#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EAthenaGamePhaseStep.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_Fly.generated.h"

class ACharacter;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable)
class UFortContextualTutorial_Fly : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_Fly();
private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
};

