#include "BuildingItemCollectorActor.h"
#include "Net/UnrealNetwork.h"


void ABuildingItemCollectorActor::SetItemCollectorState(EFortItemCollectorState InItemCollectorState) {
}

void ABuildingItemCollectorActor::ServerSpawnItem_Implementation(const FFortItemEntry OutputItem) {
}
bool ABuildingItemCollectorActor::ServerSpawnItem_Validate(const FFortItemEntry OutputItem) {
    return true;
}

void ABuildingItemCollectorActor::OnRep_TrackedInteractionData() {
}

void ABuildingItemCollectorActor::OnRep_ItemCollectorState() {
}

void ABuildingItemCollectorActor::OnRep_ControllingPlayer() {
}

void ABuildingItemCollectorActor::OnRep_ActiveInputItem() {
}




bool ABuildingItemCollectorActor::HasEnouphDepositItems(AFortPlayerController* FortPC, UFortWorldItemDefinition* InputItem, bool bAllOrNothing) {
    return false;
}

int32 ABuildingItemCollectorActor::GetTeamReachedGoalCount(uint8 InTeam) {
    return 0;
}

bool ABuildingItemCollectorActor::GetOverrideRarity_Implementation(EFortRarity& Rarity) const {
    return false;
}

int32 ABuildingItemCollectorActor::GetNumberOfCaptures(AFortPlayerController* InFortPC, UFortWorldItemDefinition* InInputItem) {
    return 0;
}

int32 ABuildingItemCollectorActor::GetDepositGoal(AFortPlayerController* InFortPC, UFortWorldItemDefinition* InInputItem) {
    return 0;
}

int32 ABuildingItemCollectorActor::GetDepositAmount(AFortPlayerController* InFortPC, UFortWorldItemDefinition* InInputItem) {
    return 0;
}

UFortWorldItemDefinition* ABuildingItemCollectorActor::GetCurrentActiveItem() const {
    return NULL;
}

void ABuildingItemCollectorActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingItemCollectorActor, ItemCollectorState);
    DOREPLIFETIME(ABuildingItemCollectorActor, TrackingType);
    DOREPLIFETIME(ABuildingItemCollectorActor, ControllingPlayer);
    DOREPLIFETIME(ABuildingItemCollectorActor, bUseInstanceLootValueOverrides);
    DOREPLIFETIME(ABuildingItemCollectorActor, OverrideOutputItems);
    DOREPLIFETIME(ABuildingItemCollectorActor, ItemCollections);
    DOREPLIFETIME(ABuildingItemCollectorActor, ActiveInputItem);
    DOREPLIFETIME(ABuildingItemCollectorActor, StartingGoalLevel);
    DOREPLIFETIME(ABuildingItemCollectorActor, TrackedInteractionData);
}

ABuildingItemCollectorActor::ABuildingItemCollectorActor() {
    this->ItemCollectorBehavior = EFortItemCollectorBehavior::FirstToGoal;
    this->bRequireAllForInteraction = false;
    this->bRequireAllForTurnIn = false;
    this->bHasToHaveSomething = true;
    this->bIncrementCaptureCountWhenGoalIsReached = true;
    this->bCurrentInteractionSuccess = false;
    this->ItemCollectorState = EFortItemCollectorState::CanInteract;
    this->TrackingType = EFortItemCollectorTrackingType::Team;
    this->ControllingPlayer = NULL;
    this->bCallOnLocalInteract = false;
    this->bUseInstanceLootValueOverrides = false;
    this->OverrideGoal = 0;
    this->NumInteractionsAllowed = -1;
    this->NumInteractions = 0;
    this->ActiveInputItem = NULL;
    this->ClientPausedActiveInputItem = NULL;
    this->ItemRotationTime = 0.00f;
    this->ItemRotationTimeVariation = 0.00f;
    this->DespensingDelayTime = 0.00f;
    this->LootTossConeHalfAngle = 60.00f;
    this->LootTossSpeed = 550.00f;
    this->bTossOnGround = false;
    this->StartingGoalLevel = 0;
}

