#include "FortResourceItemDefinition.h"

UFortResourceItemDefinition::UFortResourceItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ResourceType = EFortResourceType::Wood;
    AccumulatingStatType = EFortReplicatedStat::None;
}

