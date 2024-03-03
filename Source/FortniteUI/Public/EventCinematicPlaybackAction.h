#pragma once
#include "CoreMinimal.h"
#include "FortScriptedAction.h"
#include "EventCinematicPlaybackAction.generated.h"

UCLASS(Blueprintable)
class AEventCinematicPlaybackAction : public AFortScriptedAction {
    GENERATED_BODY()
public:
    AEventCinematicPlaybackAction();
private:
    UFUNCTION(BlueprintCallable)
    void HandleVideoEnded();
    
};

