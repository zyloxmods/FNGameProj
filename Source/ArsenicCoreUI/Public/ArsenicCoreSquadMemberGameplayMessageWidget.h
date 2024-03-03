#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.h"
#include "ArsenicCoreSquadMemberStatusTrackingWidget.h"
#include "ArsenicCoreSquadMemberGameplayMessageWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARSENICCOREUI_API UArsenicCoreSquadMemberGameplayMessageWidget : public UArsenicCoreSquadMemberStatusTrackingWidget {
    GENERATED_BODY()
public:
    UArsenicCoreSquadMemberGameplayMessageWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadMemberPlayerStatusChanged_BP(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus NewStatus);
    
};

