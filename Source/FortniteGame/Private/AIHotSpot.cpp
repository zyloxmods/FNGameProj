#include "AIHotSpot.h"
#include "Components/BillboardComponent.h"
#include "NavFilters/RecastFilter_UseDefaultArea.h"

void AAIHotSpot::SetEnabled(bool bEnabled) {
}

int32 AAIHotSpot::RemoveGroupFromHotspot(TArray<AAIController*> GroupOfAI) {
    return 0;
}

bool AAIHotSpot::RemoveFromHotspot(AAIController* AI, bool bAssignFromWaitingList) {
    return false;
}

void AAIHotSpot::OnSlotOccupied_Implementation(AAIController* AI, int32 Index, int32 UserId) {
}

void AAIHotSpot::OnSlotFreed_Implementation(AAIController* AI, int32 Index, int32 UserId) {
}

void AAIHotSpot::OnSlotEnabled_Implementation(int32 Index, int32 UserId) {
}

void AAIHotSpot::OnSlotDisabled_Implementation(int32 Index, int32 UserId) {
}

void AAIHotSpot::OnSlotClaimed_Implementation(AAIController* AI, int32 Index, int32 UserId) {
}

void AAIHotSpot::OnSlotBlocked_Implementation(AAIController* AI, int32 Index, int32 UserId) {
}

void AAIHotSpot::OnRemovedSlotlessBehavior_Implementation(AAIController* AI, bool bIsClamingSlot) {
}

void AAIHotSpot::OnRemovedBehavior_Implementation(AAIController* AI, int32 Index, int32 UserId, EAIHotSpotSlot PrevState, bool bWasOnWaitingList) {
}

void AAIHotSpot::OnMoveToSlotFinished_Implementation(AAIController* AI, int32 Index, int32 UserId, bool bResult) {
}

void AAIHotSpot::OnHotSpotEnabled_Implementation() {
}

void AAIHotSpot::OnHotSpotDisabled_Implementation() {
}

bool AAIHotSpot::OnAssignedSlotlessBehavior_Implementation(AAIController* AI) {
    return false;
}

bool AAIHotSpot::OnAssignedOccupiedBehavior_Implementation(AAIController* AI, int32 Index, int32 UserId) {
    return false;
}

bool AAIHotSpot::OnAssignedClaimedBehavior_Implementation(AAIController* AI, int32 Index, int32 UserId, bool bWasOnWaitingList) {
    return false;
}

bool AAIHotSpot::OccupySlotByIndex(int32 Index) {
    return false;
}

bool AAIHotSpot::IsSlotlessAssignmentAllowed() const {
    return false;
}

bool AAIHotSpot::IsEnabled() const {
    return false;
}

bool AAIHotSpot::IsAIAllowed_Implementation(const AAIController* AI) const {
    return false;
}

bool AAIHotSpot::HasEnabledSlots() const {
    return false;
}

bool AAIHotSpot::HasAssignedAI(const AAIController* AI, EAIHotSpotAssignmentFilter Filter) const {
    return false;
}

int32 AAIHotSpot::GetSlotUserIdByIndex(int32 Index) const {
    return 0;
}

EAIHotSpotSlot AAIHotSpot::GetSlotStateByOwner(const AAIController* AIOwner) const {
    return EAIHotSpotSlot::Free;
}

EAIHotSpotSlot AAIHotSpot::GetSlotStateByIndex(int32 Index) const {
    return EAIHotSpotSlot::Free;
}

FRotator AAIHotSpot::GetSlotRotationByIndex(int32 Index) const {
    return FRotator{};
}

AAIController* AAIHotSpot::GetSlotOwnerByIndex(int32 Index) const {
    return NULL;
}

FVector AAIHotSpot::GetSlotLocationByIndex(int32 Index) const {
    return FVector{};
}

int32 AAIHotSpot::GetSlotIndexByOwner(const AAIController* AIOwner) const {
    return 0;
}

int32 AAIHotSpot::GetSlotCount(EAIHotSpotSlotFilter Filter) const {
    return 0;
}

UAIHotSpotSlot* AAIHotSpot::GetSlotByOwner(const AAIController* AIOwner) const {
    return NULL;
}

UAIHotSpotSlot* AAIHotSpot::GetSlotByIndex(int32 Index) const {
    return NULL;
}

int32 AAIHotSpot::GetAssignedAICount(EAIHotSpotAssignmentFilter Filter) const {
    return 0;
}

TArray<AAIController*> AAIHotSpot::GetAssignedAI(EAIHotSpotAssignmentFilter Filter) const {
    return TArray<AAIController*>();
}

TArray<int32> AAIHotSpot::FindBestSlotIndices(TArray<AAIController*> AI) const {
    return TArray<int32>();
}

int32 AAIHotSpot::FindBestSlotIndex(AAIController* AI) const {
    return 0;
}

bool AAIHotSpot::CanUseSlotByIndex(const AAIController* AI, int32 Index) const {
    return false;
}

bool AAIHotSpot::AssignToSlotByIndex(AAIController* AI, int32 Index) {
    return false;
}

bool AAIHotSpot::AssignToHotspot(AAIController* AI) {
    return false;
}

int32 AAIHotSpot::AssignGroupToHotspot(TArray<AAIController*> GroupOfAI) {
    return 0;
}

void AAIHotSpot::AssignFromWaitingList() {
}

AAIHotSpot::AAIHotSpot() {
    SlotGenerator = NULL;
    FocusActor = NULL;
    FilterClass = URecastFilter_UseDefaultArea::StaticClass();
    bStartEnabled = true;
    bAllowSlotlessAssignment = false;
    bAllowClaimingMultipleSlots = false;
    bTrackOverlappingSlots = true;
    bProjectSlotsOnNavmesh = true;
    bCustomNavmeshSearchExtent = false;
    bIsEnabled = false;
    RenderingComponent = NULL;
    SpriteComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
}

