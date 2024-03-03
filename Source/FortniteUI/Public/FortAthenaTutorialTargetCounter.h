#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortAthenaTutorialTargetCounter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialTargetCounter : public UUserWidget {
    GENERATED_BODY()
public:
    UFortAthenaTutorialTargetCounter();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTargetCounterVisuals(int32 NumberOfTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCounterVisuals();
    
};

