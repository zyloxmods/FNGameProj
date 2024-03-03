#pragma once
#include "CoreMinimal.h"
#include "ENitrogenObjectiveWidgetState.h"
#include "NitrogenWidgetBase.h"
#include "NitrogenObjectiveWidget.generated.h"

class AFortAthenaVehicle;

UCLASS(Blueprintable, EditInlineNew)
class UNitrogenObjectiveWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENitrogenObjectiveWidgetState ObjectiveWidgetState;
    
public:
    UNitrogenObjectiveWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWidgetState(ENitrogenObjectiveWidgetState NewObjectiveWidgetState);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeHidden(bool bInShouldBeHidden);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndFare(bool bFareCompleted);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginFare();
    
    UFUNCTION(BlueprintCallable)
    void HandleVehicleExited();
    
    UFUNCTION(BlueprintCallable)
    void HandleVehicleEntered(AFortAthenaVehicle* NewVehicle);
    
};

