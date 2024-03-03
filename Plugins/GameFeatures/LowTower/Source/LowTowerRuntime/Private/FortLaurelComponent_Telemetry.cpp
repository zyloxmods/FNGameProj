#include "FortLaurelComponent_Telemetry.h"

void UFortLaurelComponent_Telemetry::SetLaurelType(const ELaurelType Type) {
}

void UFortLaurelComponent_Telemetry::SetExtractionReason(const ELaurelExtractionReason Reason) {
}

void UFortLaurelComponent_Telemetry::OnDropAllItems(const TEnumAsByte<ELaurelDropItemReason::Type> DropItemReason) {
}

UFortLaurelComponent_Telemetry::UFortLaurelComponent_Telemetry() {
    this->LaurelType = ELaurelType::Gatherer;
    this->ExtractionReason = ELaurelExtractionReason::Death;
}

