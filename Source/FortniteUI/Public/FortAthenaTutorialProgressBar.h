#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortAthenaTutorialProgressBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialProgressBar : public UUserWidget {
    GENERATED_BODY()
public:
    UFortAthenaTutorialProgressBar();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNewProgressBarPhase(int32 CurrentPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetProgressBarVisuals();
    
};

