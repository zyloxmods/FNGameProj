#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "ENitrogenGamePhase.h"
#include "NitrogenWidgetBase.generated.h"

class AFortAthenaMutator_Nitrogen;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UNitrogenWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* CurrentViewedPlayerState;
    
public:
    UNitrogenWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterVehicleDriver();
    
    UFUNCTION(BlueprintCallable)
    void HandleNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BindToMutator(AFortAthenaMutator_Nitrogen* Mutator);
    
};

