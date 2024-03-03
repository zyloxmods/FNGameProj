#pragma once
#include "CoreMinimal.h"
#include "AthenaCoupledWidgetInterface.h"
#include "FortHUDElementWidget.h"
#include "OstrichReticleDecorator.generated.h"

class AFortCharacterVehicle_Ostrich;

UCLASS(Blueprintable, EditInlineNew)
class UOstrichReticleDecorator : public UFortHUDElementWidget, public IAthenaCoupledWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketCooldownUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortCharacterVehicle_Ostrich* OwningOstrichVehicle;
    
public:
    UOstrichReticleDecorator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShotgunReload(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RocketsFired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RocketLoaded(float Percent, int32 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RocketCooldown(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupComplete();
    
    
    // Fix for true pure virtual functions not being implemented
};

