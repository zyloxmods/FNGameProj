#include "DevPartyMember.h"

FDevPartyMember::FDevPartyMember() {
    Emote = NULL;
    SeasonLevel = 0;
    CrossplayPreference = ECrossplayPreference::NoSelection;
    bIsEmbedded = false;
    InputType = ECommonInputType::MouseAndKeyboard;
}

