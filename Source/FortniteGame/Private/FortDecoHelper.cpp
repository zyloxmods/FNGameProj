#include "FortDecoHelper.h"

bool AFortDecoHelper::IsInValidPlacementSpot(bool bTestingForVisuals) const {
    return false;
}

bool AFortDecoHelper::GetInFallbackPosition() const {
    return false;
}

AFortDecoHelper::AFortDecoHelper() {
    DecoPreview = NULL;
    PlacementActorClass = NULL;
    DecoToolReach = 1;
    CurrentAttachmentType = EBuildingAttachmentType::ATTACH_None;
    CurrentPlacementType = EPlacementType::Free;
    DecoItemDefinition = NULL;
    ScaleData[0] = 1;
    ScaleData[1] = 1;
    bInFallbackPosition = false;
    FallbackTinyScale = 1;
    CanPlaceState = EFortDecoPlacementQueryResults::NoLocation;
    DesiredRelativeRotation = 1;
    GridSnapSize = 1;
}

