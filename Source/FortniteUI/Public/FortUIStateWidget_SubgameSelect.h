#pragma once
#include "CoreMinimal.h"
#include "ESubGame.h"
#include "FortUIStateWidget_NUI.h"
#include "FortUIStateWidget_SubgameSelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortUIStateWidget_SubgameSelect : public UFortUIStateWidget_NUI {
    GENERATED_BODY()
public:
    UFortUIStateWidget_SubgameSelect();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSubGameChanged(ESubGame NewSubGame);
    
};

