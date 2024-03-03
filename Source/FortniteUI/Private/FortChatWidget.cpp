#include "FortChatWidget.h"

void UFortChatWidget::SetControllerActionBrush(FSlateBrush SlateBrush) {
}

void UFortChatWidget::MinimizeChatWidget() {
}

void UFortChatWidget::FocusChatEntry() {
}

UFortChatWidget::UFortChatWidget() {
    this->MinimizeEnabled = true;
    this->AutoReleaseFocus = true;
    this->AllowEmotes = true;
    this->ListFadeTime = 1;
    this->MinimizedChatMessageNum = 0;
    this->ThrottleChat = true;
    this->ThrottleTicketTime = 1;
    this->ThrottleTicketCount = 0;
}

