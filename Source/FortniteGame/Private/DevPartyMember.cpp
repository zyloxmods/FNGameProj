#include "DevPartyMember.h"

FDevPartyMember::FDevPartyMember() {
    this->Emote = NULL;
    this->SeasonLevel = 0;
    this->CrossplayPreference = ECrossplayPreference::NoSelection;
    this->bIsEmbedded = false;
    this->InputType = ECommonInputType::MouseAndKeyboard;
}

