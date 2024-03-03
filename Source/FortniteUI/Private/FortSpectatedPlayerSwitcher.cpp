#include "FortSpectatedPlayerSwitcher.h"

bool UFortSpectatedPlayerSwitcher::ShouldBeVisible() const {
    return false;
}



UFortSpectatedPlayerSwitcher::UFortSpectatedPlayerSwitcher() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxPlayersToShow = 0;
}

