#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengesWidget.h"
#include "AthenaContextualChallengesWidget.generated.h"

class UFortQuestItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaContextualChallengesWidget : public UAthenaChallengesWidget {
    GENERATED_BODY()
public:
    UAthenaContextualChallengesWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOutroAutomatically() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetOutroDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewContextualHeader(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void HandleToggleFullscreenMap(bool bFullscreenMapVisible);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewContextualObjectives(const TArray<UFortQuestItem*>& InContextualQuests);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOutroDelay() const;
    
};

