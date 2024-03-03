#include "FortThumbnailRenderer.h"

void UFortThumbnailRenderer::SetRenderTargetSize(int32 Width, int32 Height) {
}

void UFortThumbnailRenderer::SetCaptureTarget(AActor* InCaptureTarget) {
}

void UFortThumbnailRenderer::SetAlphaMaskedActors(const TArray<AActor*>& InCaptureTarget) {
}

void UFortThumbnailRenderer::ReleaseResources() {
}

void UFortThumbnailRenderer::ReclaimResources() {
}

int32 UFortThumbnailRenderer::GetRendererIndex() const {
    return 0;
}

UTextureRenderTarget2D* UFortThumbnailRenderer::GetOrCreateEffectsRenderTarget() {
    return NULL;
}

UTextureRenderTarget2D* UFortThumbnailRenderer::GetOrCreateDiffuseRenderTarget() {
    return NULL;
}

UTextureRenderTarget2D* UFortThumbnailRenderer::GetOrCreateAlphaMaskRenderTarget() {
    return NULL;
}

void UFortThumbnailRenderer::CaptureEffects() {
}

void UFortThumbnailRenderer::CaptureDiffuse() {
}

void UFortThumbnailRenderer::CaptureAlphaMask() {
}

UFortThumbnailRenderer::UFortThumbnailRenderer() {
    this->AlphaMaskMaterial = NULL;
    this->EffectMaskMaterial = NULL;
    this->PrivateWorld = NULL;
    this->RendererIndex = 0;
    this->SurfaceWidth = 0;
    this->SurfaceHeight = 0;
    this->DiffuseRT = NULL;
    this->AlphaMaskRT = NULL;
    this->EffectsRT = NULL;
    this->CaptureComponent = NULL;
}

