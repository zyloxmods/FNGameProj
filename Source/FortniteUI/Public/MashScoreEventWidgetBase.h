#pragma once
#include "CoreMinimal.h"
#include "EMashScoreEvent.h"
#include "MashPlayerDataArray.h"
#include "LTMWidgetBase.h"
#include "MashScoreEventWidgetBase.generated.h"

class AFortAthenaMutator_Mash;

UCLASS(Blueprintable, EditInlineNew)
class UMashScoreEventWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Mash* MashMutatorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMashPlayerDataArray CachedPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DynamicScoreMultiplierTimeWithoutKillReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DynamicScoreMultiplierRemainingTime;
    
public:
    UMashScoreEventWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicScoreMultiplierCountdown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTotalScoreMultiplierUpdated(float TotalScoreMultiplier);
    
   // UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
 //   void OnScoreEvent(int32 ScoreValue, float TotalScoreMultiplier, const FText& ScoreText, TEnumAsByte<EMashScoreEvent::Type> ScoreEventType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerScoreChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDynamicScoreMultiplierUpdated(float DynamicMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDynamicScoreMultiplierTotalKillCountChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDynamicScoreMultiplierKillCountUpdated(int32 KillCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDynamicScoreMultiplierExpires();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDynamicScoreMultiplierCountdownUpdated(float RemainingTimeBeforeReset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDynamicScoreMultiplierChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstantScoreMultiplierUpdated(float ConstantMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnConstantScoreMultiplierChanged();
    
};

