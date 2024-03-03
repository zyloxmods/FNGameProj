#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "AthenaPreserveSquadButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPreserveSquadButton : public UCommonButton {
    GENERATED_BODY()
public:
    UAthenaPreserveSquadButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandlePreserveSquadChanged(bool bPreserveSquad);
    
};

