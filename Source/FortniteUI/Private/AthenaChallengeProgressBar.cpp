#include "AthenaChallengeProgressBar.h"


UAthenaChallengeProgressBar::UAthenaChallengeProgressBar() : UUserWidget(FObjectInitializer::Get()) {
    this->ProgressBar_StepsCompleted = NULL;
    this->RichText_Progress = NULL;
}

