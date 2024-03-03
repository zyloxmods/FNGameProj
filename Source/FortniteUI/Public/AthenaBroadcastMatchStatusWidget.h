#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaBroadcastMatchStatusWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastMatchStatusWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaBroadcastMatchStatusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStormPhaseChanged(int32 StormPhase);
    
};

