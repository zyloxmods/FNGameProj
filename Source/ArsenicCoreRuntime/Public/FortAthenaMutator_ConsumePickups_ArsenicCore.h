#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.h"
#include "FortAthenaMutator_ConsumePickups.h"
#include "FortAthenaMutator_ConsumePickups_ArsenicCore.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class ARSENICCORERUNTIME_API AFortAthenaMutator_ConsumePickups_ArsenicCore : public AFortAthenaMutator_ConsumePickups {
    GENERATED_BODY()
public:
    AFortAthenaMutator_ConsumePickups_ArsenicCore();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatusChanged(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus PlayerStatus);
    
};

