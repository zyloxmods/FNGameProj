#include "CustomCharacterPartAnimInstance_Cape.h"

UCustomCharacterPartAnimInstance_Cape::UCustomCharacterPartAnimInstance_Cape() {
    this->MeshToCopy = NULL;
    this->ClothingSimInteractor = NULL;
    this->BlendOutForksAlpha = 1;
    this->bBlendInBackwardPose = false;
    this->AimOffsetMultiplier = 1;
    this->FinalCapeBlendOutAlpha = 1;
    this->SwingRotateAlpha = 1;
    this->Cape05TrailControllerAlpha = 1;
}

