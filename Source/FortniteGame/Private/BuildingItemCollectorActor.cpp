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
    ItemCollectorBehavior = EFortItemCollectorBehavior::FirstToGoal;
    bRequireAllForInteraction = false;
    bRequireAllForTurnIn = false;
    bHasToHaveSomething = true;
    bIncrementCaptureCountWhenGoalIsReached = true;
    bCurrentInteractionSuccess = false;
    ItemCollectorState = EFortItemCollectorState::CanInteract;
    TrackingType = EFortItemCollectorTrackingType::Player;
    ControllingPlayer = NULL;
    bCallOnLocalInteract = false;
    bUseInstanceLootValueOverrides = false;
    OverrideGoal = 0;
    NumInteractionsAllowed = 0;
    NumInteractions = 0;
    ActiveInputItem = NULL;
    ClientPausedActiveInputItem = NULL;
    ItemRotationTime = 1;
    ItemRotationTimeVariation = 1;
    DespensingDelayTime = 1;
    LootTossConeHalfAngle = 1;
    LootTossSpeed = 1;
    bTossOnGround = false;
    bSpawnAmmoOnlyWhenCarryingWeapon = false;
    StartingGoalLevel = 0;
    StartingGoalLevelOverride = 0;
    InactiveItemTexture = NULL;
    bPickupOwnedByLooter = false;
}

