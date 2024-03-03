#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortWinterQuestButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestButton : public UCommonButton {
    GENERATED_BODY()
public:
    UFortWinterQuestButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOpenButtonState(bool bIsWinterQuestOwned, int32 UnusedKeys);
    
};

