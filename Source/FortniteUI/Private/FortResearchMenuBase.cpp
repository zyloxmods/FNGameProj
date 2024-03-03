#include "FortResearchMenuBase.h"

void UFortResearchMenuBase::UseResearchRespecToken() {
}

void UFortResearchMenuBase::RequestPurchaseResearchLevel(const FString& StatId) {
}




int32 UFortResearchMenuBase::GetResearchRespecTokenCount() const {
    return 0;
}

int32 UFortResearchMenuBase::GetClaimableResearchPointEstimate() {
    return 0;
}

bool UFortResearchMenuBase::AreResearchRespecTokensAvailable() const {
    return false;
}

UFortResearchMenuBase::UFortResearchMenuBase() {
    this->ResearchRespecToken = NULL;
}

