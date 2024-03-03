#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "MinigameScoreArray.h"
#include "MinigameScoreDelegateDelegate.h"
#include "MinigameScoreEntry.h"
#include "MinigameScoreTemplate.h"
#include "MinigameScoresUpdatedDelegateDelegate.h"
#include "FortMinigameScoreRegistry.generated.h"

class AFortPlayerState;
class UFortPlaysetItemDefinition;

UCLASS(Blueprintable)
class AFortMinigameScoreRegistry : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Playset, meta=(AllowPrivateAccess=true))
    UFortPlaysetItemDefinition* Playset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FMinigameScoreTemplate ScoreTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostToKillFeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameScoreDelegate OnScoreRecorded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameScoresUpdatedDelegate OnScoreRankingsUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Scores, meta=(AllowPrivateAccess=true))
    FMinigameScoreArray Scores;
    
public:
    AFortMinigameScoreRegistry();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TimeToText(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText ScoreToText(float Score) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveAllScores(AFortPlayerState* PlayerState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RecordScore(AFortPlayerState* PlayerState, float Score);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText PointsToText(float Points);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Scores();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Playset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScores(AFortPlayerState* PlayerState, TArray<FMinigameScoreEntry>& ScoreEnties) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHighScores(TArray<FMinigameScoreEntry>& HighScores) const;
    
};

