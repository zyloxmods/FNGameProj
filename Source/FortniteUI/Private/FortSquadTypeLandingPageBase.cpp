#include "FortSquadTypeLandingPageBase.h"


bool UFortSquadTypeLandingPageBase::IsScreenWIFE() const {
    return false;
}

void UFortSquadTypeLandingPageBase::HandlePendingNavigationOp() {
}

void UFortSquadTypeLandingPageBase::HandleBackInputAction(bool& bPassThrough) {
}


UFortSquadTypeLandingPageBase::UFortSquadTypeLandingPageBase() {
    this->bReadOnlyModeWIFE = false;
    this->SquadType = EFortHomebaseSquadType::AttributeSquad;
    this->ItemManagementScreenFilter = EFortFrontendInventoryFilter::Schematics;
}

