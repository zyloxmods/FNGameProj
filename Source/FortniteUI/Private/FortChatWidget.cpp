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
    this->ListFadeTime = 10.00f;
    this->MinimizedChatMessageNum = 4;
    this->ThrottleChat = true;
    this->ThrottleTicketTime = 5.00f;
    this->ThrottleTicketCount = 5;
}

