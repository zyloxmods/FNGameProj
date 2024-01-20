#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "FortHUDElementWidget.h"
#include "AthenaHUDGamePhaseChangingBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaHUDGamePhaseChangingBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaHUDGamePhaseChangingBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMessaging(EAthenaGamePhaseStep Step, const FText& MESSAGE, const FText& TimeText);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(EAthenaGamePhaseStep Step);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GamePhaseStepChanged(EAthenaGamePhaseStep Step);
    
};

