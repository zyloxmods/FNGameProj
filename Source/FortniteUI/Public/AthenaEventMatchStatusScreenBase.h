#pragma once
#include "CoreMinimal.h"
#include "AthenaEventScreenBase.h"
#include "AthenaEventMatchStatusScreenBase.generated.h"

class UAthenaRemotePlayerViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventMatchStatusScreenBase : public UAthenaEventScreenBase {
    GENERATED_BODY()
public:
    UAthenaEventMatchStatusScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimeSinceLastKillText(const FText& TimeSinceLastKillText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSupplyDropsLootedText(const FText& SupplyDropsLootedText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateShotsFiredText(const FText& ShotsFiredText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayersRemainingText(const FText& PlayersRemainingText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePiecesDestroyedText(const FText& PiecesDestroyedText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePiecesBuiltText(const FText& PiecesBuiltText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMostKillsText(const FText& MostKillsText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMostKillsScore(const FText& MostKillsScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMatchTimeText(const FText& MatchTimeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLongestEliminationText(const FText& LongestEliminationText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLongestEliminationScore(const FText& LongestEliminationScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGamePhaseTimeTitleText(const FText& GamePhaseTimeTitleText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGamePhaseTimeText(const FText& GamePhaseTimeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGamePhaseText(const FText& GamePhaseText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFastestKillText(const FText& FastestKillText, const FText& FastestKillTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDamageTakenText(const FText& DamageTakenText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDamageInflictedText(const FText& DamageInflictedText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDamageHealedText(const FText& DamageHealedText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCircleRadiusText(const FText& CircleRadiusText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateChestsLootedText(const FText& ChestsLootedText);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerKillScoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InKillScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDeadStateChanged_BP(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDead);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeadStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDead);
    
};

