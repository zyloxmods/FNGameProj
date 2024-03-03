#include "FortAnimationSharingStateProcessor.h"

UFortAnimationSharingStateProcessor::UFortAnimationSharingStateProcessor() {
    this->RunningVelocityThreshold = 1;
    this->WalkingVelocityThreshold = 1;
    this->SprintingVelocityThreshold = 1;
    this->IdleVelocityThreshold = 1;
    this->FallingZVelocityThreshold = 1;
}

