#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "FortHUDElementWidget.h"
#include "AthenaZebulonDroneWidgetBase.generated.h"

class AFortGameState;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaZebulonDroneWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaZebulonDroneWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* InGameState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
};

