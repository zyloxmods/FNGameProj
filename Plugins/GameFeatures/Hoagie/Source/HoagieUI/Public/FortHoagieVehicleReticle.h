#pragma once
#include "CoreMinimal.h"
#include "AthenaCoupledWidgetInterface.h"
#include "FortHUDElementWidget.h"
#include "FortHoagieVehicleReticle.generated.h"

class AFortHoagieVehicle;

UCLASS(Blueprintable, EditInlineNew)
class UFortHoagieVehicleReticle : public UFortHUDElementWidget, public IAthenaCoupledWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortHoagieVehicle* OwningHoagieVehicle;
    
public:
    UFortHoagieVehicleReticle();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupComplete();
    
    
    // Fix for true pure virtual functions not being implemented
};

