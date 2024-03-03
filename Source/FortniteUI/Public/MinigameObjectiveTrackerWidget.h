#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "MinigameObjectiveTrackerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigameObjectiveTrackerWidget : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
    UMinigameObjectiveTrackerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerChangedTeams();
    
};

