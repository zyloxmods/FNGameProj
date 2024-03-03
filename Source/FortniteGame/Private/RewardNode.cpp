#include "RewardNode.h"

FRewardNode::FRewardNode() {
    this->KeyCount = 0;
    this->MinKeyCountToUnlock = 0;
    this->DaysFromEventStartToUnlock = 0;
    this->bGrantedAtGraphDestruction = false;
    this->bRequiredOwnership = false;
}

