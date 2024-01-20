#include "FortDecoPreview.h"

void AFortDecoPreview::SetVectorParameterValueOnAllPreviewMIDs_Implementation(FName ParamName, const FLinearColor& ParamValue) {
}

void AFortDecoPreview::SetScalarParameterValueOnAllPreviewMIDs_Implementation(FName ParamName, float ParamValue) {
}

void AFortDecoPreview::OnUpdateVisuals_Implementation(float DeltaSeconds, bool bSafeToPlace) {
}

void AFortDecoPreview::OnUpdateScale_Implementation(float Scale, const FVector& InWorldSpacePivot) {
}

void AFortDecoPreview::OnInitializeDecoPreview_Implementation(const ABuildingActor* NewBuildingActor, const UFortDecoItemDefinition* NewDecoItemDefinition) {
}

void AFortDecoPreview::OnBounceMotionUpdate_Implementation(float VectorScale) {
}

UTexture* AFortDecoPreview::GetTextureParameterValueFromMeshComponent(UMeshComponent* MeshComp, int32 ElementIdx, FName ParamName) {
    return NULL;
}

UMaterialInstanceDynamic* AFortDecoPreview::CreatePreviewMID(UMaterialInterface* OverrideParentMaterial) {
    return NULL;
}

AFortDecoPreview::AFortDecoPreview() {
    this->FallbackAttachmentType = ATTACH_None;
    this->FallbackPlacementType = EPlacementType::Free;
    this->CanBePlacedMaterialScalarParam = TEXT("CanBePlaced");
    this->ValidPlacementScalarParam = 1.00f;
    this->InvalidPlacementScalarParam = 0.00f;
    this->InverseMovementVectorMaterialParam = TEXT("InverseMovementVector");
    this->MovementEffectScale = 50.00f;
    this->InverseOuterScaleVectorParam = TEXT("InverseInnerScale");
    this->InverseInnerScaleVectorParam = TEXT("InverseOuterScale");
    this->WorldSpacePivotVectorParam = TEXT("WorldSpacePivotLocation");
    this->DiffuseTextureParam = TEXT("Diffuse");
    this->FreePlacementOffset = 0.00f;
    this->ParentDecoHelper = NULL;
}

