#include "FortPatrolAnimLayer.h"

void UFortPatrolAnimLayer::SetPatrolAnimAsset(UFortPatrolAnimAsset* NewAnimAsset) {
}

UFortPatrolAnimAsset* UFortPatrolAnimLayer::GetPatrolAnimSetFromWeapon(const TArray<FFortPatrolAnimSetWeaponPair>& AnimWeaponPairs, const AFortWeapon* NewWeapon) const {
    return NULL;
}

UFortPatrolAnimLayer::UFortPatrolAnimLayer() {
    CurrentSpeedInterpSpeed = 1;
    PatrolForceEnableSpeedThreshold = 1;
    WalkAdditiveStartOffset = 1;
    Speed2D = 1;
    LocalVelocityYawAngle = 1;
    DisableIdleDuringWalk = 1;
    bRecentlyFired = false;
    bIsLandPatrolling = false;
    bIdle_Walk_Transition = false;
    bIsPatrolLocomotionCurrentTimeAboveThreshold = false;
    bIsDBNO = false;
    bIsMoving2D = false;
    bIsAIPatrolling = false;
    bIsStressed = false;
    bIsDanceStunned = false;
    bEnableFullbodyOverride = false;
}

