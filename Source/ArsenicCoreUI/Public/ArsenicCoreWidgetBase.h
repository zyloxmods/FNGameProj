#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.h"
#include "LTMWidgetBase.h"
#include "ArsenicCoreWidgetBase.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UArsenicCoreWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UArsenicCoreWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatusChanged(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerGhostVisibilityChanged(const bool bIsVisibile);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalGhostPlayerEnteredOrExitedVehicle(const bool bIsInVehicle);
    
};

