#include "CreativeQuestComponent.h"
#include "Net/UnrealNetwork.h"

void UCreativeQuestComponent::UnregisterQuest() {
}

void UCreativeQuestComponent::SetCurrentAmount(AController* ForPlayer, int32 NewAmount) {
}

void UCreativeQuestComponent::SetActiveFor(AController* Player, bool bNewActive) {
}

void UCreativeQuestComponent::ResetQuestProgress() {
}

void UCreativeQuestComponent::RegisterQuest() {
}

void UCreativeQuestComponent::OnRep_QuestUpdate() {
}

void UCreativeQuestComponent::OnRep_QuestActive() {
}

bool UCreativeQuestComponent::IsActiveFor(AController* Player) const {
    return false;
}

int32 UCreativeQuestComponent::GetCurrentAmount(AController* ForPlayer) const {
    return 0;
}

TArray<AController*> UCreativeQuestComponent::GetActiveSharedControllers(AController* Instigator) const {
    return TArray<AController*>();
}

void UCreativeQuestComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCreativeQuestComponent, StatToTrack);
    DOREPLIFETIME(UCreativeQuestComponent, SharingMode);
    DOREPLIFETIME(UCreativeQuestComponent, TargetTeam);
    DOREPLIFETIME(UCreativeQuestComponent, TargetClass);
    DOREPLIFETIME(UCreativeQuestComponent, AssignedToTeam);
    DOREPLIFETIME(UCreativeQuestComponent, TargetDeathCause);
    DOREPLIFETIME(UCreativeQuestComponent, bSelfEliminationsCount);
    DOREPLIFETIME(UCreativeQuestComponent, MinigameTargetAmount);
    DOREPLIFETIME(UCreativeQuestComponent, bShowQuestOnHUD);
    DOREPLIFETIME(UCreativeQuestComponent, ShowProgressMode);
    DOREPLIFETIME(UCreativeQuestComponent, bShowCompleteEffects);
    DOREPLIFETIME(UCreativeQuestComponent, QuestIndividualData);
    DOREPLIFETIME(UCreativeQuestComponent, QuestTeamProgress);
    DOREPLIFETIME(UCreativeQuestComponent, QuestAllProgress);
    DOREPLIFETIME(UCreativeQuestComponent, QuestTeamActive);
}

UCreativeQuestComponent::UCreativeQuestComponent() {
    StatToTrack = ECreativeQuestStat::None;
    SharingMode = ECreativeQuestSharing::Individual;
    TargetTeam = 0;
    TargetClass = 0;
    AssignedToTeam = 0;
    TargetDeathCause = EDeathCause::OutsideSafeZone;
    bSelfEliminationsCount = true;
    MinigameTargetAmount = 0;
    bShowQuestOnHUD = true;
    ShowProgressMode = EShowProgressMode::Total;
    bShowCompleteEffects = true;
    QuestAllProgress = 0;
}

