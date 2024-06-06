#include "BattleMapNode.h"

ABattleMapNode::ABattleMapNode() {
    EdgeClass = NULL;
    ChildrenNodeClass = NULL;
    bEnableAutomaticResize = true;
    bSupportSelection = true;
    bSupportScrubbing = true;
}

