#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "GameplayMutatorObjectDataArray.h"
#include "DiscoCaptureIconData.h"
#include "DiscoTeamScoreData.h"
#include "EDiscoScoreProgressTypes.h"
#include "FortHUDElementWidget.h"
#include "DiscoWidgetBase.generated.h"

class AFortPlayerStateZone;

UCLASS(Blueprintable, EditInlineNew)
class UDiscoWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDiscoCaptureIconData> CapturePointIconList;
    
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
    bool bLocalTeamIsScoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnemyTeamIsScoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LastViewedTeam;
    
public:
    UDiscoWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTeamScore(int32 TeamIndex, const FDiscoTeamScoreData& ScoreData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCapturePoint(int32 IconIndex, const FDiscoCaptureIconData& IconData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayScoreProgressSound(EDiscoScoreProgressTypes ScoreProgressType, bool bIsLocalTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorObjectUpdated(const FGameplayMutatorObjectDataArray& MutatorArray);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
    UFUNCTION(BlueprintCallable)
    void OnCountdownTimerUpdate();
    
};

