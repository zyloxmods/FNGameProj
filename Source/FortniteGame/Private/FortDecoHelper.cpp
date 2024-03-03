#include "FortDecoHelper.h"

bool AFortDecoHelper::IsInValidPlacementSpot(bool bTestingForVisuals) const {
    return false;
}

bool AFortDecoHelper::GetInFallbackPosition() const {
    return false;
}

AFortDecoHelper::AFortDecoHelper() {
    this->DecoPreview = NULL;
    this->PlacementActorClass = NULL;
    this->DecoToolReach = 1;
    this->CurrentAttachmentType = EBuildingAttachmentType::ATTACH_None;
    this->CurrentPlacementType = EPlacementType::Free;
    this->DecoItemDefinition = NULL;
    this->ScaleData[0] = 1;
    this->ScaleData[1] = 1;
    this->bInFallbackPosition = false;
    this->FallbackTinyScale = 1;
    this->CanPlaceState = EFortDecoPlacementQueryResults::NoLocation;
    this->DesiredRelativeRotation = 1;
    this->GridSnapSize = 1;
}

