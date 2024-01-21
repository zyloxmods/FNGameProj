#pragma once
#include "CoreMinimal.h"
#include "EFortDayPhase.h"
#include "FortMissionEventParams.h"
#include "FortDayPhaseChangeParams.generated.h"

class AFortTimeOfDayManager;
class UFortDayPhaseChangeParams;

UCLASS(Blueprintable)
class UFortDayPhaseChangeParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortTimeOfDayManager* LightingAndFogManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortDayPhase NewDayPhase;
    
    UFortDayPhaseChangeParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortTimeOfDayManager* _LightingAndFogManager, EFortDayPhase _NewDayPhase, UFortDayPhaseChangeParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortTimeOfDayManager*& _LightingAndFogManager, EFortDayPhase& _NewDayPhase);
    
};

