#pragma once
#include "CoreMinimal.h"
#include "NitrogenWidgetBase.h"
#include "NitrogenPlacementWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNitrogenPlacementWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTimerTickDuration;
    
public:
    UNitrogenPlacementWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerScoringUpdate(const int32 CurrentPlayerTeamScore, const int32 CurrentPlayerTeamPlacement, const int32 GoalScore, const TArray<uint8>& SortedTeamScores);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerScoreChanged(int32 NewScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPlacementChanged(int32 NewPlacement, int32 OldPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerFareComplete(int32 StarsGained);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndFare(bool bFareCompleted);
    
    UFUNCTION(BlueprintCallable)
    void HandleScoreChanged(int32 Score);
    
};

