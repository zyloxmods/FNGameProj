#include "FortSquadTypeLandingPageBase.h"

void UFortSquadTypeLandingPageBase::HandlePendingNavigationOp() {
}

void UFortSquadTypeLandingPageBase::HandleBackInputAction(bool& bPassThrough) {
}


UFortSquadTypeLandingPageBase::UFortSquadTypeLandingPageBase() {
    this->SquadType = EFortHomebaseSquadType::AttributeSquad;
    this->ItemManagementScreenFilter = EFortFrontendInventoryFilter::Schematics;
}

