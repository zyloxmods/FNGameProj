#include "FortEventItemDefinitionBase.h"

void UFortEventItemDefinitionBase::CreateCalendarPayload() {
}

UFortEventItemDefinitionBase::UFortEventItemDefinitionBase(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    EventPriority = 0;
    bActivateByDefault = false;
}

