#include "FortPlaysetPropItemDefinition.h"

UFortPlaysetPropItemDefinition::UFortPlaysetPropItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ActorSaveRecord = NULL;
    bExplicitlyNotBrowsable = false;
    bImplicitlyNotBrowsable = false;
}

