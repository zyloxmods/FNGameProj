#pragma once
#include "CoreMinimal.h"
#include "FortInGameLeaderboardPlacementData.h"
#include "LTMWidgetBase.h"
#include "GGProgressWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGGProgressWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointsToGoalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortInGameLeaderboardPlacementData> TopPlacedEnemies;
    
public:
    UGGProgressWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTopThreeEnemies(const TArray<FFortInGameLeaderboardPlacementData>& TopThreeEnemies);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLocalPlayer(const FFortInGameLeaderboardPlacementData& LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerNearGoal(const FFortInGameLeaderboardPlacementData& PlayerNearGoal);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderboardUpdate(const TArray<FFortInGameLeaderboardPlacementData>& Data);
    
};

