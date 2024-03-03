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
    this->StatToTrack = ECreativeQuestStat::None;
    this->SharingMode = ECreativeQuestSharing::Individual;
    this->TargetTeam = 0;
    this->TargetClass = 0;
    this->AssignedToTeam = 0;
    this->TargetDeathCause = EDeathCause::OutsideSafeZone;
    this->bSelfEliminationsCount = true;
    this->MinigameTargetAmount = 0;
    this->bShowQuestOnHUD = true;
    this->ShowProgressMode = EShowProgressMode::Total;
    this->bShowCompleteEffects = true;
    this->QuestAllProgress = 0;
}

