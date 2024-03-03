#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortMatchStatsScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchStatsScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortMatchStatsScreen();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventUpdateStats();
    
};

