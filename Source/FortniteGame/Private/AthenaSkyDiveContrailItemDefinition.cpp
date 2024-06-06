#include "AthenaSkyDiveContrailItemDefinition.h"

TSoftObjectPtr<UFXSystemAsset> UAthenaSkyDiveContrailItemDefinition::GetContrailSoftPath() const {
    return NULL;
}

UAthenaSkyDiveContrailItemDefinition::UAthenaSkyDiveContrailItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    VelocityVectorParameterName = TEXT("User.FEVec");
    ParaGlideLeanParameterName = TEXT("User.ParaGlideLeanAlpha");
}

