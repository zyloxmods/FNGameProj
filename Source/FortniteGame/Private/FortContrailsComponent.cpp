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
    bAlwaysShowContrails = false;
    bIsFrontend = false;
    ContrailsDefinition = NULL;
    ContrailFXAsset = NULL;
    VaporEmitterTemplate = NULL;
    ContrailFXComp = NULL;
    VaporFXComp = NULL;
    PoolingMethod = EPSCPoolMethod::None;
    VelocityInRangeMin = 1;
    VelocityInRangeMax = 1;
    NiagaraParamsOutRangeMin = 1;
    NiagaraParamsOutRangeMax = 1;
    TrailAlphaOutRangeMin = 1;
    TrailAlphaOutRangeMax = 1;
    TrailWidthOutRangeMin = 1;
    TrailWidthOutRangeMax = 1;
}

