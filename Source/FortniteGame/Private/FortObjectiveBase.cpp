#include "FortObjectiveBase.h"
#include "FortMissionTimerComponent.h"
#include "Net/UnrealNetwork.h"

void AFortObjectiveBase::UnpauseObjectiveTimer() {
}

void AFortObjectiveBase::StopObjective(EFortObjectiveStatus Status, const FString& Description, UFortBadgeItemDefinition* ExtraBadgeToGrant) {
}

bool AFortObjectiveBase::StartPlayingObjective() {
    return false;
}

void AFortObjectiveBase::SetUIVisibilityOverride(EFortMissionVisibilityOverride InVisibilityOverride) {
}

void AFortObjectiveBase::SetUiVisibility(bool bInIsObjectiveVisible) {
}

void AFortObjectiveBase::SetObjectiveTimer(const FString& FunctionName, float TimerLength, bool bStartPaused) {
}

void AFortObjectiveBase::PauseObjectiveTimer() {
}

void AFortObjectiveBase::OnRep_ObjectiveVisibilityOverride() {
}

void AFortObjectiveBase::OnRep_ObjectiveStatus() {
}

void AFortObjectiveBase::OnRep_bIsObjectiveVisible() {
}


bool AFortObjectiveBase::IsRelevantToTeam(uint8 Team) const {
    return false;
}

bool AFortObjectiveBase::IsRelevantToASpecificTeam() const {
    return false;
}

bool AFortObjectiveBase::IsObjectiveTimerPaused() const {
    return false;
}

void AFortObjectiveBase::GrantRewardsByTag(const FGameplayTag RewardTag, TEnumAsByte<EFortRewardType::Type> RewardType) {
}

UFortMissionTimerComponent* AFortObjectiveBase::GetTimerComponent() const {
    return NULL;
}

void AFortObjectiveBase::GetRewardItemsByTag(const FGameplayTag RewardTag, TArray<UFortWorldItemDefinition*>& OutRewardItems) {
}

float AFortObjectiveBase::GetObjectiveTimerTimeRemaining() const {
    return 0.0f;
}

FText AFortObjectiveBase::GetObjectiveDisplayString() const {
    return FText::GetEmpty();
}

FGuid AFortObjectiveBase::GetMissionGuid() const {
    return FGuid{};
}

AFortMission* AFortObjectiveBase::GetMission() const {
    return NULL;
}

void AFortObjectiveBase::EnableTick(bool bEnabled) {
}

void AFortObjectiveBase::ClearObjectiveTimer() {
}










void AFortObjectiveBase::AttemptMissionSave(const FString& OptionalSaveName) {
}

void AFortObjectiveBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortObjectiveBase, ObjectiveHandle);
    DOREPLIFETIME(AFortObjectiveBase, bIsObjectiveVisible);
    DOREPLIFETIME(AFortObjectiveBase, VisibilityOverride);
    DOREPLIFETIME(AFortObjectiveBase, bIsProgressBarHidden);
    DOREPLIFETIME(AFortObjectiveBase, ObjectiveAudiblity);
    DOREPLIFETIME(AFortObjectiveBase, ObjectiveStatus);
}

AFortObjectiveBase::AFortObjectiveBase() {
    this->ObjectiveRewardBadge = NULL;
    this->bStartPlayingOnMissionStart = true;
    this->bAcceptsMissionEventsWhenFinished = false;
    this->MissionRequirement = EFortObjectiveRequirement::Optional;
    this->bIsObjectiveVisible = true;
    this->VisibilityOverride = EFortMissionVisibilityOverride::Max_None;
    this->bIsProgressBarHidden = false;
    this->ObjectiveAudiblity = EFortMissionAudibility::UseVisibility;
    this->bRelevantToSpecificTeam = false;
    this->RelevantTeam = EFortTeam::HumanCampaign;
    this->ObjectiveStatus = EFortObjectiveStatus::Created;
    this->TimerComponent = CreateDefaultSubobject<UFortMissionTimerComponent>(TEXT("TimerComponent0"));
}

