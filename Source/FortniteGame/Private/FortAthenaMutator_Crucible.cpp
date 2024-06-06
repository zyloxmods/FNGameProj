#include "FortAthenaMutator_Crucible.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Crucible::TriggerCourseStart(AFortPlayerControllerAthena* AthenaPC) {
}

void AFortAthenaMutator_Crucible::TriggerCourseSegmentTargetElim(int32 SegmentId) {
}

void AFortAthenaMutator_Crucible::TriggerCourseSegmentStart(AFortPlayerControllerAthena* AthenaPC, int32 SegmentId) {
}

void AFortAthenaMutator_Crucible::TriggerCourseSegmentFinish(AFortPlayerControllerAthena* AthenaPC, int32 SegmentId) {
}

void AFortAthenaMutator_Crucible::TriggerCourseSegmentAIElim(int32 SegmentId) {
}

void AFortAthenaMutator_Crucible::TriggerCourseFinish(AFortPlayerControllerAthena* AthenaPC) {
}

void AFortAthenaMutator_Crucible::TriggerCourseCancel(AFortPlayerControllerAthena* AthenaPC) {
}

void AFortAthenaMutator_Crucible::RetrieveCrucibleStatsRaw(AFortPlayerControllerAthena* AthenaPC, const TArray<FString>& InStatNames) {
}

void AFortAthenaMutator_Crucible::ReportCrucibleStatsRaw(AFortPlayerControllerAthena* AthenaPC, const TMap<FString, int64>& InStats) {
}

void AFortAthenaMutator_Crucible::RegisterParticipant(AFortPlayerControllerAthena* AthenaPC) {
}

void AFortAthenaMutator_Crucible::RegisterCourseSegment(int32 SegmentId, int32 NumAI, int32 NumTargets) {
}

void AFortAthenaMutator_Crucible::OnRep_ParticipantBestTimes() {
}

void AFortAthenaMutator_Crucible::OnRep_LatestServerTime() {
}

void AFortAthenaMutator_Crucible::OnRep_LatestCourseResults() {
}

void AFortAthenaMutator_Crucible::OnRep_CurrentControlType() {
}

void AFortAthenaMutator_Crucible::OnInputMethodChanged(ECommonInputType CurrentInputType) {
}

bool AFortAthenaMutator_Crucible::IsLeaderboardSwitchingDisabled() const {
    return false;
}

bool AFortAthenaMutator_Crucible::IsLeaderboardFilterTextDisabled() const {
    return false;
}

void AFortAthenaMutator_Crucible::InsertLocalScoreIntoLeaderboard(FCrucibleLeaderboardEntry LocalTopScore, TArray<FCrucibleLeaderboardEntry>& LeaderboardToUpdate) {
}

void AFortAthenaMutator_Crucible::InitializePlayerAmmo(AFortPlayerPawn* PlayerPawn) const {
}

bool AFortAthenaMutator_Crucible::HasRegisteredPlayerController() const {
    return false;
}

float AFortAthenaMutator_Crucible::GetServerTimeContinuous() const {
    return 0.0f;
}

bool AFortAthenaMutator_Crucible::GetParticipantBestTimeCurrentControlState(EFortCrucibleStatType StatType, FCrucibleStatValue& OutStatValue) const {
    return false;
}

bool AFortAthenaMutator_Crucible::GetParticipantBestTime(EFortCrucibleStatId StatId, FCrucibleStatValue& OutStatValue) const {
    return false;
}

EFortCrucibleLeaderboardState AFortAthenaMutator_Crucible::GetLeaderboardState(EFortCrucibleLeaderboardId LeaderboardId) {
    return EFortCrucibleLeaderboardState::Disabled;
}

TArray<FCrucibleLeaderboardEntry> AFortAthenaMutator_Crucible::GetLeaderboardEntries(EFortCrucibleLeaderboardId LeaderboardId) {
    return TArray<FCrucibleLeaderboardEntry>();
}

float AFortAthenaMutator_Crucible::GetLatestServerTimeReceivedOnClientTime() const {
    return 0.0f;
}

float AFortAthenaMutator_Crucible::GetLatestServerTime() const {
    return 0.0f;
}

bool AFortAthenaMutator_Crucible::GetLatestSegmentResults(int32 SegmentId, FCrucibleSegmentResults& OutSegmentResults, bool& OutIsInProgress, bool& OutHasBeenCanceled) const {
    return false;
}

FCrucibleCourseResults AFortAthenaMutator_Crucible::GetLatestCourseResults(bool& OutIsInProgress, bool& OutHasBeenCanceled) const {
    return FCrucibleCourseResults{};
}

EFortCrucibleControlType AFortAthenaMutator_Crucible::GetCurrentControlState() const {
    return EFortCrucibleControlType::Gamepad;
}

bool AFortAthenaMutator_Crucible::GetCourseSegmentData(int32 SegmentId, FCrucibleSegmentData& OutSegmentData) const {
    return false;
}

FCrucibleCourseData AFortAthenaMutator_Crucible::GetCourseData() const {
    return FCrucibleCourseData{};
}

void AFortAthenaMutator_Crucible::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Crucible, CourseData);
    DOREPLIFETIME(AFortAthenaMutator_Crucible, ParticipantBestTimes);
    DOREPLIFETIME(AFortAthenaMutator_Crucible, CurrentControlType);
    DOREPLIFETIME(AFortAthenaMutator_Crucible, LatestCourseResults);
    DOREPLIFETIME(AFortAthenaMutator_Crucible, LatestServerTime);
}

AFortAthenaMutator_Crucible::AFortAthenaMutator_Crucible() {
    ParticipantBestTimes.AddDefaulted(18);
    CurrentControlType = EFortCrucibleControlType::Gamepad;
    LatestServerTime = 1;
}

