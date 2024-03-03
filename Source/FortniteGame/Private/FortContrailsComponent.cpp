#include "FortContrailsComponent.h"

void UFortContrailsComponent::SetupContrails(UAthenaSkyDiveContrailItemDefinition* Contrails, TSoftObjectPtr<UFXSystemAsset> ContrailsFXOverride, bool bFrontend, float ActivateDelay) {
}

void UFortContrailsComponent::HandleLanded(const FHitResult& Hit) {
}

void UFortContrailsComponent::HandleEndSkydiving() {
}

void UFortContrailsComponent::HandleEndParachuteMovement() {
}

void UFortContrailsComponent::HandleBeginSkydiving() {
}

void UFortContrailsComponent::HandleBeginParachuteMovement() {
}

UFortContrailsComponent::UFortContrailsComponent() {
    this->bAlwaysShowContrails = false;
    this->bIsFrontend = false;
    this->ContrailsDefinition = NULL;
    this->ContrailFXAsset = NULL;
    this->VaporEmitterTemplate = NULL;
    this->ContrailFXComp = NULL;
    this->VaporFXComp = NULL;
    this->PoolingMethod = EPSCPoolMethod::None;
    this->VelocityInRangeMin = 1;
    this->VelocityInRangeMax = 1;
    this->NiagaraParamsOutRangeMin = 1;
    this->NiagaraParamsOutRangeMax = 1;
    this->TrailAlphaOutRangeMin = 1;
    this->TrailAlphaOutRangeMax = 1;
    this->TrailWidthOutRangeMin = 1;
    this->TrailWidthOutRangeMax = 1;
}

