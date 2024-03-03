#include "PlaysetPreview.h"
#include "Net/UnrealNetwork.h"

void UPlaysetPreview::UpdatePreviewMeshScale() {
}

void UPlaysetPreview::OnRep_PlaysetToPlace() {
}

void UPlaysetPreview::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlaysetPreview, PlaysetToPlace);
}

UPlaysetPreview::UPlaysetPreview() {
    this->PreviewPlaysetStaticMeshActor = NULL;
    this->PlaysetMesh = NULL;
    this->PlaysetMaterial = NULL;
}

