#pragma once
#include "CoreMinimal.h"
#include "EFortReportDayPhase.h"
#include "FortGameModePvE.h"
#include "FortGameModeSurvival.generated.h"

class ABuildingActor;

UCLASS(Blueprintable, NonTransient)
class AFortGameModeSurvival : public AFortGameModePvE {
    GENERATED_BODY()
public:
    AFortGameModeSurvival();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireEvent_SurvivalVoteReport(const TArray<ABuildingActor*>& ActorsBeingDefended) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireEvent_SurvivalPeriodicReport(EFortReportDayPhase TimeOfReport, const TArray<ABuildingActor*>& ActorsBeingDefended) const;
    
};

