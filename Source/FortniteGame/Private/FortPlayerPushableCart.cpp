#include "FortPlayerPushableCart.h"
#include "FortMovementComp_GroundSpline.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerPushableCart::SetNearCheckpoint(bool bNear) {
}

void AFortPlayerPushableCart::RemovePlayerFromPushArea(AFortPlayerPawn* PlayerToRemove) {
}


void AFortPlayerPushableCart::OnSplinePointReached(int32 SplinePointReached, bool bWasMovingForward) {
}

void AFortPlayerPushableCart::OnRep_TotalActivePushers() {
}

void AFortPlayerPushableCart::OnRep_TotalActiveDefenders() {
}

void AFortPlayerPushableCart::OnRep_TeamRoles() {
}

void AFortPlayerPushableCart::OnRep_CurrentCheckpoint() {
}

void AFortPlayerPushableCart::OnRep_bIsNearCheckpoint() {
}

bool AFortPlayerPushableCart::IsNearCheckpoint() {
    return false;
}

bool AFortPlayerPushableCart::IsCartContested() const {
    return false;
}

void AFortPlayerPushableCart::GetTransformAtCheckPoint(FTransform& OutTransform, int32 CheckPointIndex) const {
}

int32 AFortPlayerPushableCart::GetTotalCheckPoints() const {
    return 0;
}

uint8 AFortPlayerPushableCart::GetTotalActivePushers() const {
    return 0;
}

uint8 AFortPlayerPushableCart::GetTotalActiveDefenders() const {
    return 0;
}

int32 AFortPlayerPushableCart::GetSplineIndexForNextCheckPoint() const {
    return 0;
}

int32 AFortPlayerPushableCart::GetSplineIndexForCurrentCheckPoint() const {
    return 0;
}

float AFortPlayerPushableCart::GetSplineDistanceAtCheckPoint(int32 CheckPointIndex) const {
    return 0.0f;
}

int32 AFortPlayerPushableCart::GetPushingStrength() const {
    return 0;
}

uint8 AFortPlayerPushableCart::GetPusherTeam() const {
    return 0;
}

UShapeComponent* AFortPlayerPushableCart::GetPushAreaShapeComponent_Implementation() const {
    return NULL;
}

float AFortPlayerPushableCart::GetPercentProgressTowardsNextCheckPoint() const {
    return 0.0f;
}

uint8 AFortPlayerPushableCart::GetNextCheckPointIndex() const {
    return 0;
}

uint8 AFortPlayerPushableCart::GetLastReachedCheckPointIndex() const {
    return 0;
}

bool AFortPlayerPushableCart::GetIsPlayerPushable() const {
    return false;
}

float AFortPlayerPushableCart::GetDistanceToNextCheckPoint() const {
    return 0.0f;
}

float AFortPlayerPushableCart::GetDesiredSpeed() const {
    return 0.0f;
}

uint8 AFortPlayerPushableCart::GetDefenderTeam() const {
    return 0;
}

void AFortPlayerPushableCart::GetCheckPointTransforms(TArray<FTransform>& OutTransforms) const {
}

float AFortPlayerPushableCart::GetCartDistanceAlongSpline() const {
    return 0.0f;
}

AActor* AFortPlayerPushableCart::GetCameraActor_Implementation() {
    return NULL;
}

void AFortPlayerPushableCart::AddPlayerToPushArea(AFortPlayerPawn* PlayerToAdd) {
}

void AFortPlayerPushableCart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerPushableCart, SplineComponent);
    DOREPLIFETIME(AFortPlayerPushableCart, SplineCheckPointIndices);
    DOREPLIFETIME(AFortPlayerPushableCart, CurrentCheckPoint);
    DOREPLIFETIME(AFortPlayerPushableCart, TeamRoles);
    DOREPLIFETIME(AFortPlayerPushableCart, TotalActivePushers);
    DOREPLIFETIME(AFortPlayerPushableCart, TotalActiveDefenders);
    DOREPLIFETIME(AFortPlayerPushableCart, bIsPushable);
    DOREPLIFETIME(AFortPlayerPushableCart, bIsNearCheckpoint);
}

AFortPlayerPushableCart::AFortPlayerPushableCart() {
    MovementComponent = CreateDefaultSubobject<UFortMovementComp_GroundSpline>(TEXT("Ground Spline Movement Component"));
    CurrentCheckPoint = 0;
    TotalActivePushers = 0;
    TotalActiveDefenders = 0;
    bIsPushable = false;
    bIsNearCheckpoint = false;
}

