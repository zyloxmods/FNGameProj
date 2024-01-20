#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortQuestScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortQuestScreen();
private:
    UFUNCTION(BlueprintCallable)
    void ProcessPendingSeenQuestItems();
    
};

