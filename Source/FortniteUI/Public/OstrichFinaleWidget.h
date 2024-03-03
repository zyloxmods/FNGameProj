#pragma once
#include "CoreMinimal.h"
#include "AthenaCoupledWidgetInterface.h"
#include "Blueprint/UserWidget.h"
#include "OstrichFinaleWidget.generated.h"

class AFortCharacterVehicle_Ostrich;

UCLASS(Blueprintable, EditInlineNew)
class UOstrichFinaleWidget : public UUserWidget, public IAthenaCoupledWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructDisplayUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishBroadcastOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortCharacterVehicle_Ostrich* OwningVehicle;
    
public:
    UOstrichFinaleWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSelfDestruct(float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartSelfDestructPrime(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelfDestructStart(float WarningDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelfDestructFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelSelfDestructPrime();
    
    
    // Fix for true pure virtual functions not being implemented
};

