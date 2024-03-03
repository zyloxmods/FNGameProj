#include "KairosViewport.h"

UKairosViewport::UKairosViewport() {
    this->EffectMaterial = NULL;
    this->CaptureSource = SCS_FinalColorLDR;
    this->DefaultGameMode = NULL;
    this->DynamicMaterial = NULL;
    this->RenderTarget = NULL;
    this->CaptureComponent = NULL;
    this->ViewportActorClass = NULL;
}

