#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CrucibleCourseData.h"
#include "CrucibleCourseResults.h"
#include "CrucibleLatestCourseResultsUpdatedDelegate.h"
#include "CrucibleLeaderboardEntry.h"
#include "CrucibleLeaderboardUpdatedDelegate.h"
#include "CrucibleParticipantBestTimesUpdatedDelegate.h"
#include "CrucibleSegmentData.h"
#include "CrucibleSegmentResults.h"
#include "CrucibleStatValue.h"
#include "EFortCrucibleControlType.h"
#include "EFortCrucibleLeaderboardId.h"
#include "EFortCrucibleLeaderboardState.h"
#include "EFortCrucibleStatId.h"
#include "EFortCrucibleStatType.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_Crucible.generated.h"

class AFortPlayerControllerAthena;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class AFortAthenaMutator_Crucible : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrucibleLeaderboardUpdated OnCrucibleLeaderboardUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrucibleParticipantBestTimesUpdated OnCrucibleParticipantBestTimesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrucibleLatestCourseResultsUpdated OnCrucibleLatestCourseResultsUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FCrucibleCourseData CourseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParticipantBestTimes, meta=(AllowPrivateAccess=true))
    TArray<FCrucibleStatValue> ParticipantBestTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentControlType, meta=(AllowPrivateAccess=true))
    EFortCrucibleControlType CurrentControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LatestCourseResults, meta=(AllowPrivateAccess=true))
    FCrucibleCourseResults LatestCourseResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LatestServerTime, meta=(AllowPrivateAccess=true))
    float LatestServerTime;
    
public:
    AFortAthenaMutator_Crucible();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TriggerCourseStart(AFortPlayerControllerAthena* AthenaPC);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCourseSegmentTargetElim(int32 SegmentId);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCourseSegmentStart(AFortPlayerControllerAthena* AthenaPC, int32 SegmentId);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCourseSegmentFinish(AFortPlayerControllerAthena* AthenaPC, int32 SegmentId);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCourseSegmentAIElim(int32 SegmentId);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCourseFinish(AFortPlayerControllerAthena* AthenaPC);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCourseCancel(AFortPlayerControllerAthena* AthenaPC);
    
    UFUNCTION(BlueprintCallable)
    void RetrieveCrucibleStatsRaw(AFortPlayerControllerAthena* AthenaPC, const TArray<FString>& InStatNames);
    
    UFUNCTION(BlueprintCallable)
    void ReportCrucibleStatsRaw(AFortPlayerControllerAthena* AthenaPC, const TMap<FString, int64>& InStats);
    
    UFUNCTION(BlueprintCallable)
    void RegisterParticipant(AFortPlayerControllerAthena* AthenaPC);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCourseSegment(int32 SegmentId, int32 NumAI, int32 NumTargets);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ParticipantBestTimes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LatestServerTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LatestCourseResults();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentControlType();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaderboardSwitchingDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaderboardFilterTextDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    static void InsertLocalScoreIntoLeaderboard(FCrucibleLeaderboardEntry LocalTopScore, UPARAM(Ref) TArray<FCrucibleLeaderboardEntry>& LeaderboardToUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InitializePlayerAmmo(AFortPlayerPawn* PlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRegisteredPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTimeContinuous() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParticipantBestTimeCurrentControlState(EFortCrucibleStatType StatType, FCrucibleStatValue& OutStatValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParticipantBestTime(EFortCrucibleStatId StatId, FCrucibleStatValue& OutStatValue) const;
    
    UFUNCTION(BlueprintCallable)
    EFortCrucibleLeaderboardState GetLeaderboardState(EFortCrucibleLeaderboardId LeaderboardId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCrucibleLeaderboardEntry> GetLeaderboardEntries(EFortCrucibleLeaderboardId LeaderboardId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLatestServerTimeReceivedOnClientTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLatestServerTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLatestSegmentResults(int32 SegmentId, FCrucibleSegmentResults& OutSegmentResults, bool& OutIsInProgress, bool& OutHasBeenCanceled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCrucibleCourseResults GetLatestCourseResults(bool& OutIsInProgress, bool& OutHasBeenCanceled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCrucibleControlType GetCurrentControlState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCourseSegmentData(int32 SegmentId, FCrucibleSegmentData& OutSegmentData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCrucibleCourseData GetCourseData() const;
    
};

