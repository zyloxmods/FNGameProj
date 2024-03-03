#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.h"
#include "FortActivatablePanelLTM.h"
#include "ArsenicCoreActivatablePanelBase.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UArsenicCoreActivatablePanelBase : public UFortActivatablePanelLTM {
    GENERATED_BODY()
public:
    UArsenicCoreActivatablePanelBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatusChanged(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus NewStatus);
    
};

