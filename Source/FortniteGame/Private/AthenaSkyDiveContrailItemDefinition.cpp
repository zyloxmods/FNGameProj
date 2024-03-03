#include "AthenaSkyDiveContrailItemDefinition.h"

TSoftObjectPtr<UFXSystemAsset> UAthenaSkyDiveContrailItemDefinition::GetContrailSoftPath() const {
    return NULL;
}

UAthenaSkyDiveContrailItemDefinition::UAthenaSkyDiveContrailItemDefinition() {
    this->VelocityVectorParameterName = TEXT("User.FEVec");
    this->ParaGlideLeanParameterName = TEXT("User.ParaGlideLeanAlpha");
}

