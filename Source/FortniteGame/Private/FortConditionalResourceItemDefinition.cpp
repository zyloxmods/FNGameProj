#include "FortConditionalResourceItemDefinition.h"

UFortConditionalResourceItemDefinition::UFortConditionalResourceItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    Condition = EFortConditionalResourceItemTest::CanEarnMtx;
}

