#include "FortMobileActionButtonBehavior_ToggleRadio.h"

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioStopped(UStreamingRadioPlayerComponent* Radio, URadioContentSourceItemDefinition* Source) {
}

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioPlaying(UStreamingRadioPlayerComponent* Radio, URadioContentSourceItemDefinition* Source) {
}

UFortMobileActionButtonBehavior_ToggleRadio::UFortMobileActionButtonBehavior_ToggleRadio() {
    this->ToggleRadioOffSprite = NULL;
}

