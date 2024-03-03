#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "TDMTeamScoreData.h"
#include "TwoTeamLivesCounterWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UTwoTeamLivesCounterWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* CurrentPlayerState;
    
public:
    UTwoTeamLivesCounterWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(AFortPlayerStateAthena* DeadPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLivesCountUpdated(int32 LocalLivesCount, int32 EnemyLivesCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFriendlyTeamScoreUpdated(FTDMTeamScoreData ScoreData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyTeamScoreUpdated(FTDMTeamScoreData ScoreData);
    
};

