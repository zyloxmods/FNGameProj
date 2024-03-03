#include "DonutChallengeIdleGame.h"

void UDonutChallengeIdleGame::TryJump() {
}

void UDonutChallengeIdleGame::StartGame() {
}

void UDonutChallengeIdleGame::EndSuperJump() {
}

void UDonutChallengeIdleGame::EndJump() {
}

void UDonutChallengeIdleGame::EndBumpyRide() {
}
















UDonutChallengeIdleGame::UDonutChallengeIdleGame() {
    this->DayNightCycleTime = 1;
    this->PlayerTopSpeed = 1;
    this->BumpyRideSpeedReduction = 1;
    this->MapScale = 1;
    this->MaxNumLevels = 1;
    this->ObjectSpawnPlacementRadius = 1;
    this->NumOfTreeSpawnAttempts = 0;
    this->NumOfRockSpawnAttempts = 0;
    this->NumOfBigRockSpawnAttempts = 0;
    this->NumOfJumpPadSpawnAttempts = 0;
    this->Curve_BonusSpawn_Trees = NULL;
    this->Curve_BonusSpawn_SmallBumps = NULL;
    this->Curve_BonusSpawn_Bumps = NULL;
    this->Curve_BonusSpawn_JumpPads = NULL;
    this->Anim_Jump = NULL;
    this->Anim_MediumJump = NULL;
    this->Anim_SuperJump = NULL;
    this->Anim_BumpyRide = NULL;
    this->Image_Player = NULL;
    this->Image_MobileInput = NULL;
    this->Image_MobileInput_Background = NULL;
    this->Button_Jump = NULL;
    this->Button_MobileJump = NULL;
}

