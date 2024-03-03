#include "BattleMapNode.h"

ABattleMapNode::ABattleMapNode() {
    this->EdgeClass = NULL;
    this->ChildrenNodeClass = NULL;
    this->bEnableAutomaticResize = true;
    this->bSupportSelection = true;
    this->bSupportScrubbing = true;
}

