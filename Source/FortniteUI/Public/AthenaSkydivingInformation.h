#pragma once
#include "CoreMinimal.h"
#include "AthenaCoupledWidgetInterface.h"
#include "FortHUDElementWidget.h"
#include "AthenaSkydivingInformation.generated.h"

class UFortControllerComponent_SkydiveFeedback;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaSkydivingInformation : public UFortHUDElementWidget, public IAthenaCoupledWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_SkydiveFeedback* PairedComponent;
    
public:
    UAthenaSkydivingInformation();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartSkydive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewVerticalSpeed(float NewVerticalSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewRating(float NewRating);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewNormalizedPlayerAltitude(float NormalizedPlayerAltitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewNormalizedOpeningAltitude(float NormalizedOpeningAltitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewNormalizedGroundAltitude(float NormalizedGroundAltitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewHorizontalSpeed(float NewHorizontalSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewGroundAltitude(float NewGroundAltitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewDuration(float NewDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewCurrentAltitude(float NewCurrentAltitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewAltitude(float NewAltitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitSkydive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterGlider();
    
    
    // Fix for true pure virtual functions not being implemented
};

