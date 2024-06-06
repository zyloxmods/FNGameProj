#include "BuildingEditModeSupport.h"

void UBuildingEditModeSupport::OnSuccessfulMatchInteractParamUpdate(float NewInteractParamVal) {
}

void UBuildingEditModeSupport::OnSuccessfulMatchInteractComplete() {
}

UBuildingEditModeSupport::UBuildingEditModeSupport() {
    OwnerBuilding = NULL;
    EditingController = NULL;
    PreviewMetadata = NULL;
    ScratchpadMetadata = NULL;
    ExpectedMetadataClass = NULL;
    LastInteractedComp = NULL;
    LastHighlightedComp = NULL;
    PreviewComponent = NULL;
    bCanMirrorMetadataToMatch = false;
    bCanRotateMetadataToMatch = false;
    bEditActionInProgress = false;
    bInitializedTimelines = false;
    bUseAlternateMaterials = false;
}

