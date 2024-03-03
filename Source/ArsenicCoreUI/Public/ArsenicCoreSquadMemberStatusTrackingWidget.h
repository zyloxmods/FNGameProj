#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.h"
#include "ArsenicCoreWidgetBase.h"
#include "ArsenicCoreSquadMemberStatusTrackingWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARSENICCOREUI_API UArsenicCoreSquadMemberStatusTrackingWidget : public UArsenicCoreWidgetBase {
    GENERATED_BODY()
public:
    UArsenicCoreSquadMemberStatusTrackingWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberPlayerStatusChanged(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus NewStatus);
    
};

