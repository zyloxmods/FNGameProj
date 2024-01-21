#include "FortAnimationSharingStateProcessor.h"

UFortAnimationSharingStateProcessor::UFortAnimationSharingStateProcessor() {
    this->RunningVelocityThreshold = 8.00f;
    this->IdleVelocityThreshold = 0.50f;
    this->FallingZVelocityThreshold = 40.00f;
}

