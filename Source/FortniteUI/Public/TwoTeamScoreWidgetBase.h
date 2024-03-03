#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "ETDMScoreProgressTypes.h"
#include "FortHUDElementWidget.h"
#include "TDMTeamScoreData.h"
#include "TwoTeamScoreWidgetBase.generated.h"

class AFortPlayerStateZone;

UCLASS(Blueprintable, EditInlineNew)
class UTwoTeamScoreWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PlayScoreProgressSoundPercentagesMild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PlayScoreProgressSoundPercentagesMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PlayScoreProgressSoundPercentagesStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageScoreToPlayCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageScoreToPlayFinalCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreCountdownSoundFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LastViewedTeam;
    
public:
    UTwoTeamScoreWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTotalScore(const FText& TotalScoreText, int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTeamScore(int32 TeamIndex, const FTDMTeamScoreData& ScoreData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayScoreProgressSound(ETDMScoreProgressTypes ScoreProgressType, bool bIsLocalTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
    UFUNCTION(BlueprintCallable)
    void OnCountdownTimerUpdate();
    
};

