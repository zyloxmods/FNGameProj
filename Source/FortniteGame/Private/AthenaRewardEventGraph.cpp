#include "AthenaRewardEventGraph.h"

UAthenaRewardEventGraph::UAthenaRewardEventGraph(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bRewardKeysInternally = false;
    CosmeticRandomnes = NULL;
    ItemType = EFortItemType::AthenaRewardGraph;
}

