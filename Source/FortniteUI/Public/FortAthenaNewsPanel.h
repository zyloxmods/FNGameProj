#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortAthenaNewsPanel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaNewsPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortAthenaNewsPanel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnExternalURLOpened();
    
};

