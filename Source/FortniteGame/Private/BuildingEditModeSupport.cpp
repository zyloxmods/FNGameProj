#include "BuildingEditModeSupport.h"

void UBuildingEditModeSupport::OnSuccessfulMatchInteractParamUpdate(float NewInteractParamVal) {
}

void UBuildingEditModeSupport::OnSuccessfulMatchInteractComplete() {
}

UBuildingEditModeSupport::UBuildingEditModeSupport() {
    this->OwnerBuilding = NULL;
    this->EditingController = NULL;
    this->PreviewMetadata = NULL;
    this->ScratchpadMetadata = NULL;
    this->ExpectedMetadataClass = NULL;
    this->LastInteractedComp = NULL;
    this->LastHighlightedComp = NULL;
    this->PreviewComponent = NULL;
    this->bCanMirrorMetadataToMatch = false;
    this->bCanRotateMetadataToMatch = false;
    this->bEditActionInProgress = false;
    this->bInitializedTimelines = false;
}

