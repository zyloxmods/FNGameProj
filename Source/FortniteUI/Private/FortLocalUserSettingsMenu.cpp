#include "FortLocalUserSettingsMenu.h"


UFortLocalUserSettingsMenu::UFortLocalUserSettingsMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->OwningMenuAnchor = NULL;
    this->Section_OnlineStatus = NULL;
    this->Section_Privacy = NULL;
    this->Section_Participation = NULL;
    this->Section_VoiceChannel = NULL;
}

