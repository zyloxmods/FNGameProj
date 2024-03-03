#include "FortOptionsTab_NewSystemShim.h"

bool UFortOptionsTab_NewSystemShim::AttemptToPopNavigation() {
    return false;
}

UFortOptionsTab_NewSystemShim::UFortOptionsTab_NewSystemShim() {
    this->Settings_Panel = NULL;
    this->Registry = NULL;
}

