#include "AthenaChallengeCountdownDisplay.h"


UAthenaChallengeCountdownDisplay::UAthenaChallengeCountdownDisplay() : UUserWidget(FObjectInitializer::Get()) {
    this->DisplayType = ECountdownDisplay::EventEndTime;
    this->Text_TimeRemaining = NULL;
}

