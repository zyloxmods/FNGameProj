#include "RewardNode.h"

FRewardNode::FRewardNode() {
    KeyCount = 0;
    MinKeyCountToUnlock = 0;
    DaysFromEventStartToUnlock = 0;
    bGrantedAtGraphDestruction = false;
    bRequiredOwnership = false;
}

