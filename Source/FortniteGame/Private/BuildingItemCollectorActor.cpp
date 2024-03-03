#include "BuildingItemCollectorActor.h"
#include "Net/UnrealNetwork.h"


void ABuildingItemCollectorActor::SetLootSpawnWorldTransformOverride(const FTransform& Transform) {
}

void ABuildingItemCollectorActor::SetItemCollectorState(EFortItemCollectorState InItemCollectorState) {
}

void ABuildingItemCollectorActor::ServerSpawnItem_Implementation(const FFortItemEntry OutputItem) {
}
bool ABuildingItemCollectorActor::ServerSpawnItem_Validate(const FFortItemEntry OutputItem) {
    return true;
}

void ABuildingItemCollectorActor::RefreshCollectorsActiveItem() {
}

void ABuildingItemCollectorActor::OnRep_TrackedInteractionData() {
}

void ABuildingItemCollectorActor::OnRep_ItemCollectorState() {
}

void ABuildingItemCollectorActor::OnRep_ControllingPlayer() {
}

void ABuildingItemCollectorActor::OnRep_ActiveInputItem() {
}




bool ABuildingItemCollectorActor::HasEnoughDepositItems(AFortPlayerController* FortPC, UFortWorldItemDefinition* InputItem, bool bAllOrNothing, const EInteractionBeingAttempted InInteractionBeingAttempted) {
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

void ABuildingItemCollectorActor::ClearLootSpawnWorldTransformOverride() {
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
    this->TrackingType = EFortItemCollectorTrackingType::Player;
    this->ControllingPlayer = NULL;
    this->bCallOnLocalInteract = false;
    this->bUseInstanceLootValueOverrides = false;
    this->OverrideGoal = 0;
    this->NumInteractionsAllowed = 0;
    this->NumInteractions = 0;
    this->ActiveInputItem = NULL;
    this->ClientPausedActiveInputItem = NULL;
    this->ItemRotationTime = 1;
    this->ItemRotationTimeVariation = 1;
    this->DespensingDelayTime = 1;
    this->LootTossConeHalfAngle = 1;
    this->LootTossSpeed = 1;
    this->bTossOnGround = false;
    this->bSpawnAmmoOnlyWhenCarryingWeapon = false;
    this->StartingGoalLevel = 0;
    this->StartingGoalLevelOverride = 0;
    this->InactiveItemTexture = NULL;
    this->bPickupOwnedByLooter = false;
}

