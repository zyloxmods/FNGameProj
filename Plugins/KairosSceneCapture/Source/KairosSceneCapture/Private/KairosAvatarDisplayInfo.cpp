#include "KairosAvatarDisplayInfo.h"

FKairosAvatarDisplayInfo::FKairosAvatarDisplayInfo() {
    this->CurrentState = EKairosAvatarCaptureState::Unloaded;
    this->TargetState = EKairosAvatarCaptureState::Unloaded;
    this->AnimToPlay = NULL;
    this->HeroItem = NULL;
    this->KairosHero = NULL;
    this->Pawn = NULL;
    this->bIsCurrentUser = false;
    this->bSpawnTransformIsAbsolute = false;
    this->bIsNewCharacter = false;
    this->HeroPawnClass = NULL;
    this->bUseDefaultFrontendAnimClass = false;
}

