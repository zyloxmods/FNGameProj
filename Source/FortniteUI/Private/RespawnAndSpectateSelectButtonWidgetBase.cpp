#include "RespawnAndSpectateSelectButtonWidgetBase.h"





void URespawnAndSpectateSelectButtonWidgetBase::OnSelectionMade() {
}

void URespawnAndSpectateSelectButtonWidgetBase::OnSelectionHovered() {
}



URespawnAndSpectateSelectButtonWidgetBase::URespawnAndSpectateSelectButtonWidgetBase() {
    this->TargetImageSizeBox = NULL;
    this->DefaultButtonImageSizeBox = NULL;
    this->TargetButton = NULL;
    this->TargetImage = NULL;
    this->DefaultButtonImage = NULL;
    this->TargetNameTextWidget = NULL;
    this->Switcher_TargetState = NULL;
    this->ButtonIndex = 0;
    this->bIsSelectable = false;
}

