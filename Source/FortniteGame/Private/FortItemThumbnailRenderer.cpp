#include "FortItemThumbnailRenderer.h"
#include "Templates/SubclassOf.h"

void UFortItemThumbnailRenderer::UpdateItemCapture() {
}

void UFortItemThumbnailRenderer::SetItemDefinition(UFortItemDefinition* InItemDefinition) {
}

void UFortItemThumbnailRenderer::InvalidateCapture() {
}

AFortItemCaptureActor* UFortItemThumbnailRenderer::GetOrCreateCaptureActor(TSubclassOf<AFortItemCaptureActor> ThumbnailCaptureTarget) {
    return NULL;
}

UMaterialInstanceDynamic* UFortItemThumbnailRenderer::GetItemPreviewMaterial() {
    return NULL;
}

UFortItemThumbnailRenderer::UFortItemThumbnailRenderer() {
    PreviewMaterial = NULL;
    CaptureEnvironmentActorClass = NULL;
    ItemDefinition = NULL;
    PreviewMaterialInstance = NULL;
}

