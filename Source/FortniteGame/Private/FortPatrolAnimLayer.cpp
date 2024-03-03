#include "FortPatrolAnimLayer.h"

void UFortPatrolAnimLayer::SetPatrolAnimAsset(UFortPatrolAnimAsset* NewAnimAsset) {
}

UFortPatrolAnimAsset* UFortPatrolAnimLayer::GetPatrolAnimSetFromWeapon(const TArray<FFortPatrolAnimSetWeaponPair>& AnimWeaponPairs, const AFortWeapon* NewWeapon) const {
    return NULL;
}

UFortPatrolAnimLayer::UFortPatrolAnimLayer() {
    this->CurrentSpeedInterpSpeed = 1;
    this->PatrolForceEnableSpeedThreshold = 1;
    this->WalkAdditiveStartOffset = 1;
    this->Speed2D = 1;
    this->LocalVelocityYawAngle = 1;
    this->DisableIdleDuringWalk = 1;
    this->bRecentlyFired = false;
    this->bIsLandPatrolling = false;
    this->bIdle_Walk_Transition = false;
    this->bIsPatrolLocomotionCurrentTimeAboveThreshold = false;
    this->bIsDBNO = false;
    this->bIsMoving2D = false;
    this->bIsAIPatrolling = false;
    this->bIsStressed = false;
    this->bIsDanceStunned = false;
    this->bEnableFullbodyOverride = false;
}

