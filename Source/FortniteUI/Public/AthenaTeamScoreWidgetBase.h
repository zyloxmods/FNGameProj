#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaTeamScoreWidgetBase.generated.h"

class AFortPlayerStateAthena;
class AFortPlayerStateZone;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaTeamScoreWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* CurrPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GoalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousScorePlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousDeltaScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreviousIsWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreviousHasScore;
    
public:
    UAthenaTeamScoreWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScoreChanged(int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlacementChanged(int32 Placement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardChanged(int32 ScoreDelta, bool bIsWinner, bool bHasScore);
    
    UFUNCTION(BlueprintCallable)
    void HandleUpdate();
    
    UFUNCTION(BlueprintCallable)
    void HandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable)
    void HandleScoreChanged(int32 Score);
    
};

