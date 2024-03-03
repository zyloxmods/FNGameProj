#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetBase.h"
#include "CobaltStatusWidgetBase.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UCobaltStatusWidgetBase : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LastViewedTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* RoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountdownSoundStartTime;
    
public:
    UCobaltStatusWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimerVisuals(float TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void UpdateScoringUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTimer();
    
    UFUNCTION(BlueprintCallable)
    void RoundAdvanced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTieBreakerUI(bool bHasTieBreaker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTeamScore(int32 TeamIndex, int32 Score, bool bIsTeamLeading, bool bPlayAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTieBreakerChangedSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayScoreProgressSound(bool bIsLocalTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayLeadChangedSound(bool bTookTheLead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayCountdownSound();
    
};

