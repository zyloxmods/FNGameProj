#include "FortAwardItemDefinition.h"

UFortAwardItemDefinition::UFortAwardItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bSingleSharedDetector = false;
    bCanEarnMultipleTimes = false;
    DetectorClass = NULL;
}

