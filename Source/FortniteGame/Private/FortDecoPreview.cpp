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
    FallbackAttachmentType = EBuildingAttachmentType::ATTACH_None;
    FallbackPlacementType = EPlacementType::Free;
    CanBePlacedMaterialScalarParam = TEXT("CanBePlaced");
    ValidPlacementScalarParam = 1;
    InvalidPlacementScalarParam = 1;
    InverseMovementVectorMaterialParam = TEXT("InverseMovementVector");
    MovementEffectScale = 1;
    InverseOuterScaleVectorParam = TEXT("InverseInnerScale");
    InverseInnerScaleVectorParam = TEXT("InverseOuterScale");
    WorldSpacePivotVectorParam = TEXT("WorldSpacePivotLocation");
    DiffuseTextureParam = TEXT("Diffuse");
    FreePlacementOffset = 1;
    ParentDecoHelper = NULL;
}

