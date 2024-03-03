#pragma once
#include "CoreMinimal.h"
#include "EMashScoreEvent.h"
#include "MashPlayerDataEntry.h"
#include "LTMWidgetBase.h"
#include "MashScoreEventWidgetBase.generated.h"

class AFortAthenaMutator_Mash;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UMashScoreEventWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Mash* MashMutatorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* CachedLocalPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMashPlayerDataEntry CachedLocalPlayerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StreakScoreMultiplierRemainingTime;
    
public:
    UMashScoreEventWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStreakScoreMultiplierCountdown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStreakScoreMultiplierUpdated(uint8 StreakScoreLevel, uint8 MaxStreakScoreLevel, float ScoreMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStreakScoreMultiplierKillCountUpdated(int32 TotalStreakKillCount, float StreakLevelProgressRatio);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStreakScoreMultiplierExpires();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStreakScoreMultiplierCountdownUpdated(float RemainingTimeBeforeReset);
    
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
  //  void OnScoreEvent(int32 ScoreValue, const FText ScoreText, EMashScoreEvent ScoreEventType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDataChanged();
    
};

